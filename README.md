
## Authors

- [@sarkarpriyam](https://www.github.com/sarkarpriyam)


## 🚀 About Me
I am Priyam Sarkar. Presently I am learning C++ at Soundarya PU College.


# Gestokar
In this project we are building a Gesture Controlled Car.



## 🛠 Skills
C++, HTML, SQL, MongoDB, Microsoft Office, Kdenlive(Video Editing).


## Abstract:
The proposed work presents a Hand Gesture Controlled car which can be controlled by simple
hand gesture using Arduino-Nano and IMU sensors instead of using button control. The robot
and the gesture instrument are connected wirelessly through radio waves. User can interact with
the car/machine in a more friendly way due to the wireless communication. Here the most
significant device is IMU sensor. The hand position is sensed and the coordinates generated is
considered as the parameter and if necessary conditions are met, the statement prescribed in the
Arduino code is executed and the direction of the car is changed accordingly. The data is
transmitted wirelessly via a trans-receiver module to a microcontroller and the received signals
are then classified to one of six control commands for navigating a car-robot.
By the impact of this project, it will benefit various areas including applications in military, home
automation and high security bases.
Keywords: Arduino Technology, Gesture, wireless module.
## Introduction:
Wireless cars/machines are playing an essential role in automation across all sectors like in
construction, military, medical, manufacturing, etc. In many fields, it is very risky and
complicated to handle the machines through switches or remote and sometimes the operator may
get confused in the switch control and button control, so this new concept of gesture control is
introduced to control the machine/car with the movement of hand. Gesture means the movement
of the part of the body to express an idea or a meaning. The main gesture movement or
communication is done through a hand or head. The 2 parts of the body (hand and arm) have
most attention among those people who study gestures in fact much reference for gesture
recognition. Gesture recognition enables humans to interact and communicate with the machine
without any mechanical devices. With the help of a data glove which contains an accelerometer
(inertial sensors) the human gesture are sent. Data gloves are the devices worn on the hands in
order to measure their position and their movements. Inertial sensors are used to recognize the
human gestures and those actions are replicated by the car/machine. An Arduino-Nano
microcontroller is used in the transmitter section and is coded in such a way such that it does the
required actions for the human gestures. The Arduino-Nano reads the analogue output values
from the accelerometer and converts the analogue value to respective digital value. This system
also uses a remote control system and nRF24L01 trans-receiver mode for wire-less
communication. Instead of working with both accelerometers and gyroscopes separately since
they are not as accurate as when they are combined, here MPU6050 module is used as an inertial
sensor based on MEMS (Micro Electro Mechanical Systems) technology in which both the
accelerometer and the gyroscope is integrated inside a single chip. Instead of using separate
transmitter and receiver module we are using nRF24L01 which is a single chip 2.4GHz transreceiver module. In this chip encoder, decoder, transmitter and receiver are inbuilt.
In this system, a gesture driven vehicle is developed, in which how the vehicle is moving i.e.,
control and handling is depend on user gesture. This control make switching system more
real and give more freedom to user and has wide applications in medical (gesture controlled
wheel chair for disabled people) and military applications.
Literature survey:
The paper [3] focuses on the development of hand gestures recognition sensor based on
accelerometer and gyroscope for controlling arm of underwater remotely operated robots. In this
proposed work hand gesture sensor depends on accelerometer and gyroscope. Gyroscope is the
sensor which is used to capture the position of the operator hand when he is working in
underwater operated vehicle and it is attached with a hand. This system has two main parts,
ground station and aquatic remotely operated robot arm. This device can be operated without any
training. Underwater application can be easily done with this device.
The paper [1] [2] focuses on the development of the robotic Arm by using Flex Sensor, and DC
motor which are connected to the Arduino Uno. It is controlled by processing software. These
robotic Arm are cheap and easily available which makes it free from unnecessary wire
connection, reducing its complexity. But still there is a requirement of adding new ideas and
functionality.
In paper [4] superior approach is used for adjusting the clap sound gesture commands from
kinetic sensor related to the computer and mobile phone is hooked up via RF hyper link. The
hardware is predicted on microcontroller code to keep away from unessential motion of the
robots. The clap sound is to actuate the gesture tracking mode to transport the robot and
deactivate the gesture monitoring mode after last ceasing the robot.
The paper [5] explain about the implementation and design of gesture controlled robot by using
Flex Sensor, Ultra sonic Sensor, and accelerometer connected to Microcontroller. The research
paper [6] describes the Robot, which is controlled wirelessly via Bluetooth via hand glove. The
project is developed by using sensor, LCD Display, a Bluetooth Device, NXT Microcontroller,
Motor and Camera.
Objectives:
The objective of the project is to control the direction of movement of simple car/machine with
hand gestures. In this project, user is also able to control motions of the car by wearing controller
glove and performing predefined gestures. Arduino microcontroller and MPU6050 are the two
major components. MPU6050 signals are received and assisted with wired correspondence and
the car moves depending upon the signal made by our hand. In this project we describe
approximately the gesture manage car which may be managed through our everyday hand gesture
and the program is designed by using Arduino-Nano.
## Methodology:
The project is categorised into 2 sections that are “transmitter section and another is receiver
section”.
The transmitter section consists of one Arduino Nano, one MPU6050 module and two RF transreceiver (nRF24L01) module. The receiver section includes RF receiver module, one motor
driver IC.
When the car/machine is powered on, the transmitter part, which consists of Arduino-Nano takes
the analog output values and convert analog value to the respective digital value and will
continuously monitor the MPU6050 sensor.
Based on the orientation of the MPU6050 sensor, this data is captured by the Arduino, which
then transmits a corresponding data to the trans-receiver nRF24L01 module.
At the receiver section, the trans-receiver nRF24L01 module receives the data and this data is
fed to the motor driver IC. Based on the data, the movement of the motors occurs, and hence the
movement of the car is defined.
Based on the input, the car/machine will behave as follows:
* Moves in forward direction
* Moves in reverse direction
* It can even turn left or right while moving forward or in reverse direction
* On the spot left or right turn to pass through the narrow space
* We have also added head light, back light and turning lights

## Block Diagram
__Transmitter section:__
![image](https://github.com/sarkarpriyam/Gestokar/blob/master/images/Screenshot%202022-11-10%20192352.png?raw=true)

__Receiver section:__
![image](https://github.com/sarkarpriyam/Gestokar/blob/master/images/Screenshot%202022-11-10%20192423.png?raw=true)

## Explanation of Transmitter and Receiver section Parts:

### MPU6050 sensor:
IMU (Inertial Measurement Unit) sensors are one of the most inevitable type of sensors used
today in all kinds of electronic gadgets. IMU sensors consists of accelerometer, gyroscope,
magnetometer and altimeter. The MPU 6050 is a six axis (gyro + accelerometer) MEMS motion
tracking module, which gives six values as output that is three values from the accelerometer and
three from the gyroscope. The MPU 6050 communicates with the Arduino through the I2C
protocol.
### Arduino-Nano:
It a single core 8-bit microcontroller board belonging to Atmel ATmega-328P family. It is
equipped with 30 male input/output headers, in a dip-30 configuration, which can be
programmed using the Arduino integrated development environment (IDE), which is common
to all Arduino boards and running both online and offline. The board can be powered through
a type-b micro-USB cable, or through a 9V battery.
## Specifications:
* Operating Voltage: 5 Volts
* Input Voltage: 6 to 20 Volts
* Digital input/output Pins: 14 (plus 6 can PWM [Pulse width modulation] output pins)
* Analog Input Pins: 8
* DC Current per input/output Pin: 40 mA
* DC Current for 3.3V Pin: 50 mA
* Flash memory: 32 KB
* SRAM: 2 KB
* EEPROM: 1KB
* Clock Speed: 16 MHz
  
### NRF24L01:
Instead of using separate transmitter and receiver module we are using nRF24L01 which is a
single chip 2.4GHz trans-receiver module. In this chip encoder, decoder, transmitter and receiver
are inbuilt. The nRF24L01 is a true single chip GFSK trans-receiver with Digital interface (SPI)
speed of 0-8 Mbps with a complete OSI Link Layer in hardware and Enhanced Shock-Burst
technology.
### Specifications:
* Auto ACK & retransmit
* Address and CRC computation
* On the air data rate 1 or 2Mbps
* 125 RF channel operation
* Short switching time enable frequency hopping
* Fully RF compatible with nRF24XX
* 5V tolerant signal input pads
* 20-pin package (QFN20 4x4mm)
* Uses ultra-low cost +/- 60 ppm crystal
* Uses low cost chip inductors and 2-layer PCB
* Power supply range: 1.9 to 3.6 V
  
### L293D motor Driver:
The Motor Driver is a module that allows to control the working speed and direction of two
motors simultaneously.
L293D is a 16 Pin Motor Driver IC designed to provide bidirectional drive currents at voltages
from 5 V to 36 V.

## Circuit Diagram:
__Transmitter:__

![image](https://github.com/sarkarpriyam/Gestokar/blob/master/images/Screenshot%202022-11-10%20194402.png?raw=true)

__Receiver:__

![image](https://github.com/sarkarpriyam/Gestokar/blob/master/images/photo_6282966911696351356_y%20(1).jpg?raw=true)

## Applications:
* The gesture recognition system can be extended by placing a wireless camera at the
receiver section which can be used to track the enemies in hostile areas.
* Automation systems: Gesture recognition can be merged in automation systems such as
homes, offices and transport vehicles to reduce the resources necessary to create primary
or secondary input systems like switches, buttons and remote controls.
* Hand gesture controlled robotic arms can be developed.
* In hospitals some handicapped patients cannot operate the wheel-chair due to
psychomotor problems whereas some patients require electric wheel-chair. With the help
of hand gestures physically disabled person would be able to move himself to the desired
location by controlling the movement of the chair. The accelerometer can be used to
control the wheel-chair to move front, back, right and left.
* Gestokar can also be extended to GestoRobot, which can be useful in many applications
like remote surveillance, military, etc.
* The system can be also used as a breaching machine during sensitive duration.

## Advantages:

* Remote control with the wave of a hand of various devices is possible through the use of
gesture recognition.
* Traditional interfaces, like keyboards, mouse, joystick presents a bottleneck in
applications where the core system relies on interaction of the user with the machine due
to the un-naturalness of the interaction.
* GUI (Graphical User Interface) may or may not be interfaced which further implies the
simplicity of gesture controls.
* The machine can be remotely controlled from a distance when high transceiver modules
are implemented.

## Drawbacks:
* Working range decreases as battery voltage decreases.
* This technology is most suitable in a controlled lab setting.
* The machine can’t recognize the start and end points of hand gestures from continuous
motion of hands.

## Conclusion:
The purpose of this research was to identify effective strategies to implement the alternative way
to controlling machines/cars/robots in real time. Gesture controlled being a more natural way of
controlling devices is more efficient and easy. The command for the car/machine to navigate in
specific direction in the environment is based on technique of hand gestures provided by the user.
The project is outlining hand gesture recognition system that is designed to be capable to
recognize the hand gestures in real-time using data gloves, inertial sensors and trans-receiver
which transmits the data wirelessly. In MEMS (Micro-Electro Mechanical Systems) all the
individual sensors can be integrated on a single chip hence, by using MEMS sensors the car can
be controlled effectively and efficiently. Adding more accessories to the machine/car and
controlling it using gesture is also possible.

## References:
1. Love Aggarwal, Varnika Gaur, PuneetVerma, “Design and Implementation of Wireless
Gesture Controlled Robotic Arm with Vision”, International Journal of
Computer Application, Vol-79, No.-13, PP.-39-43, October 2013.
1. Vicky Somkuwar, RoshanGabhane, Sandeepkakde, “Design and Implementation of Gesture
Controlled Robot using Flex sensor and Accelerometer”
1. RiyazMansuri, SandeshVakale, AshishShinde, Tanveer Patel, “Hand
Gesture Control Robot Vehicle”, IJECT, Vol-4, Issue SPL-2, PP:77-
80, 2013
1. Vinayak kamanth, Sandeep Bhat ”Kinetic sensor based
real-time robot path planning using gesture and clap
sound.”
1. Gaurav Gautam, Abhijeet Ashish, Anil Kumar, Avdesh, “Wirelessly Hand Glove Operated
Robot”, International Journal of AdvancedResearch in Electronics
and Communication Engineering (IJARECE), Volume-3, Issue-11,PP.-1546-1547, November 2014.
1. GestureTek “GestPoint” [online] available from
<http://www.gesturetek.com/gestpoint/introduction.php> 



