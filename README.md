# Motor_Control_Using_Temperature

*   This project is based on Monitoring the temperature and controlling the motors.
*   This projects mainly used by Small scale/Large scale industries.

| FOLDER | CONTENTS |
| ------ | -------- |
| 0_Abstract | Abstract.md |
| 1_Requirements | Requirements.md |
| 2_Design | MOTOR_CONT.MD, TEMP_FLOW.md |
| 3_Implementation | inc (LCD.c, header.h, display_control.c), src (main.c), Makefile, Readme.md |
| 4_TestCases | TestCase.md |
| 5_Report | FinalReport.md |
| 6_Output | Video, ImageVideo.md, motor_control_temp.hex, Motor_control_using_tem.sim1 |

## Installation Softwares

*   VISUAL STUDIO CODE.
*   LINUX (latest version preferred "UBUNTU").
*   Rather than going to install LINUX OS in BIOS, you can also use VIRTUAL BOX to run LINUX in WINDOWS.
*   GitHub desktop(To push and pull the changes without command through GIT BASH).
*   Dr.Memory(Memory check).

## FLOWCHART

* CONTROLLING MOTOR USING TEMPERATURE

![FJFH drawio](https://user-images.githubusercontent.com/101009958/164981391-8b0567c9-f8f7-42b5-b7fb-d3ce200a345b.png)

* TEMPERATURE MONITORING

![MONITOR_TEMPERATURE](https://github.com/Rajasekhar22/image/blob/main/TEMP.jpeg)


## PROCEDURE

* Temperature Monitoring
  * Temperature sensor(DHT22/11) is interfaced with the Atmega328 microcontroller chip.
  * In which it measures the temperature with some delay mentioned frequently and gives signals to MCU.
  * It is connected to PORT C for Analog to Digital conversion.
  * Using formulae the digital values are converted into deg. Celsius.
  * Now the temperature is displayed in LCD.

* Controlling motor
  * When Switch is in off condition Motor 2 is On and LED 2 will be glowing.
  * when Switch is in On Condition Motor 1 is On and LED 1 will be glowing.


## For Testing and using code

* Preferable Coding Software for Avr Coding is Microchip studio.
* You have to use C compiler with MINGGW(latest or the previous versions).
* Set path for MINGGW in Environment variables.
* To go with best compiler use VISUAL STUDIO CODE.
* In Visual Studio code you can also RUN the program in both LINUX and WINDOWS.
* Unit testing is done for Linux.

## Badges 
* Codacy - Static Code Analysis
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/2c73efbf9ec24ad1868e452829cbfca9)](https://www.codacy.com/gh/Rajasekhar22/M2_Motor_Control_Using_Temperature/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Rajasekhar22/M2_Motor_Control_Using_Temperature&amp;utm_campaign=Badge_Grade)
#
* Codiga - Static Code Analysis
[![codiga](https://img.shields.io/badge/CODIGA_GRADE-A-green.svg)](https://api.codiga.io/project/33070/status/svg)
#
* Codiga - CODE QUALITY SCORE
[![codiga](https://img.shields.io/badge/CODIGA_QUALITY_SCORE-100-green.svg)](https://api.codiga.io/project/33070/score/svg)
#
* CPP CHECK
[![CQ - c-cpp](https://github.com/Rajasekhar22/M2_Monitoring_Temperature_And_Controlling_Motor/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/Rajasekhar22/M2_Monitoring_Temperature_And_Controlling_Motor/actions/workflows/c-cpp.yml)
#
* Windows BUILD
[![C windows BUILD](https://github.com/Rajasekhar22/M2_Monitoring_Temperature_And_Controlling_Motor/actions/workflows/makefile.yml/badge.svg)](https://github.com/Rajasekhar22/M2_Monitoring_Temperature_And_Controlling_Motor/actions/workflows/makefile.yml)
#
* Valgrind
[![Valgrind](https://github.com/Rajasekhar22/M2_Monitoring_Temperature_And_Controlling_Motor/actions/workflows/valgrind.yml/badge.svg)](https://github.com/Rajasekhar22/M2_Monitoring_Temperature_And_Controlling_Motor/actions/workflows/valgrind.yml)
#

## 🔗 Links
[![my_portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/Rajasekhar22)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](www.linkedin.com/in/bammidi-rajasekhar-2a58651b6)

## Support

*   For support, email rajasekharganesh2202@gmail.com / Raise an issue through GITHUB.

