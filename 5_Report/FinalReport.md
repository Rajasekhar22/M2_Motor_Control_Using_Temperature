# Monitoring_Temperature_And_Controlling_Motor

##  ABSTRACT
This project is based on Controlling two more motors by using Temperature using DHT22/11 sensor/Temperature sensor(Thermister). For Ac motors, we can use Relays to run another motor by energising the coil. For monitoring the Temperature, LCD 16x2 panel is used. This control of the motor using temperature is very much useful to control the motor in the industry. Industries, where there is a requirement for continuous operation of motors, can use this project. To prevent the motor from producing high heat and harmonics we go for controlling the motor using temperature. We can also be able to monitor the status of the motor using the LED provided to it. To improve the performance of the operation we can also use the timers to operate the motor by taking statistics of some reading provided by a sensor concerning the motor. This is project mainly gives safety to motors to prevent from damage and explode.


*   This project is based on Monitoring the temperature and controlling the motors.
*   This projects mainly used by Small scale/Large scale industries.
# 
## COMPONENTS REQUIRED

* ATMEGA328
* TEMPERATURE SENSOR -DHT22/11(POTENTIOMETER).
* DC MOTOR - 2.
* LED - 2.
* SIMULIDE(simulation).
* CODEBLOCKS.
* SPDT RELAY
# 
## COMPONENT DESCRIPTIONS
### ATMEGA328

* The ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family It has a modified Harvard architecture 8-bit RISC processor core.

### TEMPERATURE SENSOR-DHT22/11(POTENTIOMETER)

* DHT11 and DHT22 are sensors that we can use to measure temperature and humidity.

### DC MOTOR

* A direct current (DC) motor is a type of electric machine that converts electrical energy into mechanical energy. DC motors take electrical power through direct current, and convert this energy into mechanical rotation.

### LED(LIGHT EMITTING DIODE)

* Compared with conventional light sources that first convert electrical energy into heat, and then into light, LEDs (Light Emitting Diodes) convert electrical energy directly into light, delivering efficient light generation with little-wasted electricity.

### LCD16X2 DISPLAY

* A 16x2 LCD means it can display 16 characters per line and there are 2 such lines. In this LCD each character is displayed in 5x7 pixel matrix. The 16 x 2 intelligent alphanumeric dot matrix display is capable of displaying 224 different characters and symbols.

### SPDT RELAY
* An SPDT Relay or Single Pole Double Throw Relay is a type of relay that has one input and two outputs. Including the coil terminals, it has a total of five terminals. It not only provides the switching function even it can route the signal. An SPDT relay can control two electrical or electronic circuits.
# 

## FLOWCHART

* CONTROLLING MOTOR

![MOTOR_CONTROL](https://github.com/Rajasekhar22/image/blob/main/2022-04-23-12-19-26.png)

* TEMPERATURE MONITORING

![MONITOR_TEMPERATURE](https://github.com/Rajasekhar22/image/blob/main/TEMP.jpeg)

* As i have used unstable version of Simulide i haven't got proper results even my code is correct.
* I have used potentiometer instead of that.
# 
## PROCEDURE

* Temperature Monitoring
  * Temperature sensor(DHT22/11) or Potentiometer is interfaced with the Atmega328 microcontroller chip.
  * In which it measures the temperature with some delay mentioned frequently and gives signals to MCU.
  * It is connected to PORT C for Analog to Digital conversion.
  * Using formulae the digital values are converted into deg. Celsius.
  * Now the temperature is displayed in LCD.

* Controlling motor using Temperature sensor
  * There are three cases where the two motor's operate:
    1. Case1: while the temperature is below 20 - MOTOR 1 OPERATES.
    2. Case2: while the temperature is above 20 and below 50 - MOTOR 2 OPERATES.
    3. Case3: while the temperature is above 50 - MOTOR 2 OPERATES.
  * It can be observed that the motor's are controlled by the temperature.

* Two Motor's are controlled by a SPDT RELAY with some delay.
# 
## For Testing and using code

* Preferable Coding Software for Avr Coding is Microchip studio.
* You have to use C compiler with MINGGW(latest or the previous versions).
* Set path for MINGGW in Environment variables.
* To go with best compiler use VISUAL STUDIO CODE.
* In Visual Studio code you can also RUN the program in both LINUX and WINDOWS.
* Unit testing is done for Linux.
# 
## Conclusion
  
  Motor's connected are controlled using switch and temperature is sensed properly.
# 
## REFERENCES

* Referred temeperature sensor integration with Atmega328 MCU.
* Surefed in internet regarding AVR CODING.
# 
