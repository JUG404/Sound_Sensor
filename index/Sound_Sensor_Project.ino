#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//kodi i grupit per ekranin
LiquidCrystal_I2C lcd(0x27, 16, 2);  

const int micPin = A0;   
const int numSamples = 100;  
const float minDb = 40.0;  
const float maxDb = 120.0; 
const int p2pMin = 2;   
const int p2pMax = 200; 

void setup() {
    Serial.begin(9600);
    lcd.init();       
    lcd.backlight();   
    lcd.setCursor(0, 0);
    lcd.print("Sound Level Meter");
    delay(2000);
    lcd.clear();}

void loop() {
    int minValue = 1023, maxValue = 0;
    for (int i = 0; i < numSamples; i++) {
        int sample = analogRead(micPin);
        if (sample > maxValue) maxValue = sample;
        if (sample < minValue) minValue = sample;}
    float dB = map(peakToPeak, p2pMin, p2pMax, minDb, maxDb);
    
    dB = constrain(dB, minDb, maxDb);
    Serial.print("Min: "); Serial.print(minValue);
    Serial.print(", Max: "); Serial.print(maxValue);
    Serial.print(", P2P: "); Serial.print(peakToPeak);
    Serial.print(", dB Level: "); Serial.println(dB);

    lcd.setCursor(0, 0);
    lcd.print("Noise Level:     "); 
    lcd.setCursor(0, 1);
    lcd.print("Level: ");
    lcd.print(dB, 1); 
    lcd.print(" dB    "); 

    delay(500); 
}