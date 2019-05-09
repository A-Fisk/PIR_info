# Guide to building PIR system 

Main things to be built are sensors, cables, arduino boards.  

#### Sensors  
- Requires 1k, 10k, horizontal connector, PIR sensor, 
circuit board. 
  - Optional add LDR, requires LDR, 2 pin connector, additional
10k resistor.  
- Should be fairly obvious where each component goes.  
- Solder in each component  
- Snip off extra length of pins from soldered side.  

### Cables  
- Requires telephone cable and connector.  
- Cut cable to correct length (normal scissors work).  
- Strip ~0.5cm off each end  
- Add connectors to each end - ensure the release flange is
on the same side of the wire, easy by looking for raised line 
marking one side of the cable.  
- Firmly attach connector using ethernet cable crushing tool
thingy.  

### Arduino circuit board.  
- Requires circuit board, vertical connectors, and various 
pin connectors.  
- Pin connectors should be lined up around edge of circuit board 
or lined up down centre.  
- Solder pin connectors in first, snip off un-needed lengths.  
- Add vertical connectors and solder and snip off.  


### Raspberry Pi  
- Load NOOBS onto micro-SD card.  
- Load micro-SD card into Raspberry Pi.  
- Turn on pi, follow instructions to install raspbian etc.  
- Set Node-red to auto start.  
  - open terminal and run following.  
  - `sudo systemct1 node-red.service`  

