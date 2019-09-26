# PIRs setup guide 

This guide aims to outline how to create and set up the 
PIR system as outlined in 
[Brown et al 2016](https://wellcomeopenresearch.org/articles/1-2/v2)

It will provide an overview of the requirements, basic building, 
setup, and some basic troubleshooting. 
For further help, contact the authors. 

## Guide structure  

1. Build PIRs  
2. Setup PIRs  
3. Troubleshoot PIRs 


### Requirements  

For specific details, see 
[Brown et al 2016](https://wellcomeopenresearch.org/articles/1-2/v2).

####  Sensors  
- Sensor circuit Boards - Fritz file available in paper 
supplementary file 3.  
- Resistors  
  - 1k, 10k  
- PIR sensors  
- horizontal telephone connectors  
- 2 pin connectors  
- LDRS  
- Solder all together!  
#### Cables 
- Cables <- cut to required length  
- telephone cable connectors, 4 inner wires. 
#### Sensor Reading devise - Arduino 
- Arduino Uno  
- circuit board  
  - Fritz design present in paper supplement file 4.  
  - Vertical connectors  
  - 2, 1, 6 pin connectors  
- USB to ? usb cable  
#### File saving device - Raspberry pi  
- Rasbperry Pi  
- Power source  
- SD card   
#### Software 
- [Arduino IDE](https://www.arduino.cc/en/Main/Software)   
- [NOOBS](https://www.raspberrypi.org/downloads/noobs/)  
- node-red - installed by default with NOOBS  
  - For local computer trouble shooting  
  - [Node.js](https://nodejs.org/en/)  
  - [node-red](https://nodered.org/docs/getting-started/installation)  
    - `sudo npm install -g --unsafe-perm node-red`

### Authors.
Fisk, A.S. angus.fisk@ndcn.ox.ac.uk  
McKillop L.  
Krone L.  
van der Vinne V.   
Based on [Brown et al 2016](https://wellcomeopenresearch.org/articles/1-2/v2).
