# fire-alert-system
Project Timeline-.
     1: Introduction to Basic Devices  {23 Jan}
     2: UART Protocol Basics {24Jan-25Jan}
     3: UART Coding and AT Commands for                       sending message using GSM    module{26Jan-2Feb}
     4: I2C Protocol Basics {3Feb-4Feb}
     5: Coding for temperature sensor using I2C{5Feb-9Feb}

Abstract

This is a quick guide for making and understanding FIRE ALERT SYSTEM which will include a GSM,Gas Sensor and Temperature Sensor.The GSM module will send messages to the assigned phone number when the temperature and gas sensor will detect fire or Smoke.

List of Components Used-
1) Atmel ATMEGA 128
2) GSM Module,Sim 900A
3) Gas Sensor,MQ135
4) Temperature Sensor,bmp180
5) TTL
6) Bread Board
7) Male-Female headers
8) FRC Port
9) USBasp 

          WORKING OF COMPONENTS


Atmega 128
        
It is a basic microcontroller which consists of  following ports and pins which were in use to us.
1)total 64 pins 
2) 6 ports (A,B,C,D,E ,F)
3)TX RX pins for transmitting and receiving data respectively.
4)SCL and SDA for communication i.e I2C
SCL stands for serial clock.
SDA stands for serial data.
5)VCC(5V)and GND.

GSM Module



GSM is a mobile communication modem; it stands for global system for mobile communication (GSM).
SIM900 is designed with a very powerful single-chip processor integrating AMR926EJ-S core 
Quad - band GSM/GPRS module with a size of 24mmx24mmx3mm 
SMT type suit for customer application 
An embedded Powerful TCP/IP protocol stack 
Based upon mature and field-proven platform, backed up by our support service, from definition to design and production.
This module works on 12V DC supply.
It works with gsm sim,the sim which used 3g 2g connectivity previously  ex :- vodafone , airtel, etc . Except Volte JIO.
AT (ATTENTION) COMMANDS
AT commands are the commands on which the module works . These are also called HAYES COMMANDS
These begin with letter AT.
The command set consists of a series of short text strings which can be combined to produce commands for operations such as dialing, hanging up, and changing the parameters of the connection. The vast majority of dial-up modems(GSM 900 A) use the Hayes command set in numerous variations.
These commands are interpreted via moduĺe to their useful information.
For Ex:-  
AT - TO CHECK CONNECTIVITY
ATD <PHONE NO.>;      TO MAKE A CALL
AT +CMGS="phone no.";  TO SEND MSG
And many more which you can get through the mentioned website

www.sim.com/wm 

Gas Sensor (MQ135)


MQ135 Gas Sensor is an air quality sensor an Alcohol sensor for detecting a wide range of gases, including NH3, NOx, alcohol, benzene, smoke and CO2. Ideal for use in office or factory. MQ135 gas sensor has high sensitivity to Ammonia, Sulfide and Benzene steam, also sensitive to smoke and other harmful gases. It is low cost & particularly suitable for Air quality monitoring applications.
Working:
Sensor consists of SnO2 coated with Al and a heating element inside it which are packed in a net like structure made of steel.
In the presence of good quality air(bad conductor) the resistance of circuit is high,
When it is in contact with polluted air its conductivity increases.
It works on 5V DC supply.
It has 4 pins outlet
1)VCC
2)Gnd 
3)DO digital output
4)AO analog output
We have to use PIN DO as an output .

Features:

High sensitivity to Ammonia, Sulfide and Benzene.
Stable and Long Life.
Detection Range: 10 - 300 ppm NH3, 10 - 1000 ppm Benzene, 10 - 300 ppm Alcohol.
Heater Voltage: 5.0V.
Dimensions: 18mm Diameter, 17mm High excluding pins, Pins - 6mm High.




TEMPERATURE SENSOR BMP 180

The BMP180 is the function compatible successor of the BMP085, a new generation of high 
precision digital pressure sensors for consumer applications. 
The ultra-low power, low voltage electronics of the BMP180 is optimized for use in mobile phones, 
PDAs, GPS navigation devices and outdoor equipment. With a low altitude noise of merely 0.25m at 
fast conversion time, the BMP180 offers superior performance. The I2C interface allows for easy 
system integration with a microcontroller. 

It sends the hex value of the temp recorded as observed on X-CTU.
It works on 3.3 V which is less than 5V,therefore we have to use resistors which will be connected with SCL-VCC and SDA-VCC

TTL (TRANSISTOR-TRANSISTOR LOGIC)

It is a device which is used to transmits and receives data.
Before using TTL and USBasp we need to install the drivers.
Its RX is connected to TX of other device,and vice versa.


              SOFTWARE USED
1)Atmel studio
2)X-CTU
3)Tera Term
4)Extreme burner
5)Git hub app
            

                                                      UART

          UART stands for Universal Asynchronous Receiver/Transmitter. It’s not a communication protocol like SPI and I2C, but a physical circuit in a microcontroller, or a stand-alone IC. A UART main purpose is to transmit and receive serial data.
In UART communication, two UARTs communicate directly with each other. The transmitting UART converts parallel data from a controlling device like a CPU into serial form, transmits it in serial to the receiving UART, which then converts the serial data back into parallel data for the receiving device. Only two wires are needed to transmit data between two UARTs. Data flows from the Tx pin of the transmitting UART to the Rx pin of the receiving UART.
UARTs transmit data asynchronously, which means there is no clock signal to synchronize the output of bits from the transmitting UART to the sampling of bits by the receiving UART. Instead of a clock signal, the transmitting UART adds start and stop bits to the data packet being transferred. These bits define the beginning and end of the data packet so the receiving UART knows when to start reading the bits.
When the receiving UART detects a start bit, it starts to read the incoming bits at a specific frequency known as the baud rate. Baud rate is a measure of the speed of data transfer, expressed in bits per second (bps). Both UARTs must operate at about the same baud rate. The baud rate between the transmitting and receiving UARTs can only differ by about 10% before the timing of bits gets too far off.



The UART that is going to transmit data receives the data from a data bus. The data bus is used to send data to the UART by another device like a CPU, memory, or microcontroller. Data is transferred from the data bus to the transmitting UART in parallel form. After the transmitting UART gets the parallel data from the data bus, it adds a start bit, a parity bit, and a stop bit, creating the data packet. Next, the data packet is output serially, bit by bit at the Tx pin. The receiving UART reads the data packet bit by bit at its Rx pin. The receiving UART then converts the data back into parallel form and removes the start bit, parity bit, and stop bits. Finally, the receiving UART transfers the data packet in parallel to the data bus on the receiving end.

I2C
I²C (Inter-Integrated Circuit), pronounced I-squared-C, is a synchronous, multi-master, multi-slave, packet switched, single-ended, serial computer bus invented in 1982 by Philips Semiconductor (now NXP Semiconductors). It is widely used for attaching lower-speed peripheral ICs to processors and microcontrollers in short-distance, intra-board communication. Alternatively, I²C is spelled I2C (pronounced I-two-C) or IIC (pronounced I-I-C).
