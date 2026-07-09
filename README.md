# Arduino Sound Level Meter



### Description

This project is an Arduino-based sound level meter that measures the surrounding noise level using a microphone sensor and displays the result on a 16x2 I2C LCD screen.



The system reads sound intensity values from the microphone module, calculates the peak-to-peak signal range, converts it into an estimated decibel (dB) value, and displays the noise level in real time.



### Features

\- Measures surrounding sound levels using a microphone sensor.

\- Calculates the minimum and maximum sound values from multiple samples.

\- Converts sound intensity into an estimated dB level.

\- Displays the noise level on a 16x2 I2C LCD screen.

\- Sends measurement data to the Serial Monitor.



### Components Used

\- Arduino Uno

\- Microphone Sensor Module

\- 16x2 I2C LCD Display

\- Jumper Wires

\- Breadboard



### Technologies Used

\- Arduino C/C++

\- I2C Communication

\- Analog Signal Reading



### How It Works

The microphone sensor collects analog sound data through the Arduino analog input pin A0.



The program takes multiple samples and finds the minimum and maximum values. The difference between these values represents the peak-to-peak sound signal, which is mapped to an estimated decibel range between 40 dB and 120 dB.



The calculated sound level is then displayed on the LCD screen and printed to the Serial Monitor.



### Circuit Connection



#### Microphone Sensor

| Sensor Pin | Arduino Pin |

|------------|-------------|

| OUT        | A0          |

| VCC        | 5V          |

| GND        | GND         |

#### 

#### LCD Display

| LCD Pin | Arduino Pin |

|---------|-------------|

| SDA     | A4          |

| SCL     | A5          |

| VCC     | 5V          |

| GND     | GND         |



### Output Example

#### The LCD displays: 

Noise Level:

Level: XX.X dB



### How to Run

1\. Connect the components according to the circuit diagram.

2\. Install the `LiquidCrystal\_I2C` library in Arduino IDE.

3\. Upload the code to the Arduino board.

4\. Open the Serial Monitor to view the measured values.

5\. The current noise level will appear on the LCD screen.



### Project Structure





Arduino-Sound-Level-Meter/

│

├── Sound\_Level\_Meter.ino

├── README.md

└── images/

└── lcd\_output.jpg





### Author

Created by Jugera Lameborshi.

