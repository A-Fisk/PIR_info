# Setting up PIR system 

Guide for setting up a PIR system assuming have all 
software and equipment ready. 

1. Check PIR system with arduino.  
- Plug PIRs into Arduino and Arduino into computer  
- Open Arduino Software  
- Set the port to listen to - tools/port  
- Upload sketch to Arduino  
- Open Serial Monitor to check output - check Baud rate  
- Verify each PIR in turn by waving in front of it 
and hiding it, check LDR too.  
- Can be useful to increase speed of output by setting 
delay to 1.  
- Ensure set delay back to correct value before continuing  

2. Check Raspberry Pi with Arduinos  
- Plug Raspberry Pi into monitor/keyboard/mouse  
- Open Node-red  
- enable nodered to autostart  
  - sudo systemct1 node-red.service (?)  
- Import flows to be used (source?)  
- Check Serial port to listen to by connecting 
Arduino and seeing if output comes up in debug panel  
- Check file name being saved under.  
- Check date of system  
  - If incorrect set with `sudo date -s "current date"`  
- Shutdown pi properly.  *important for time/date save*  

3. Install PIR system  
- Install individual sensors in cages.  
- Plug sensors into correct ports on arduino  
- Plug arduino into correct port on raspberry pi  
- Power on Raspberry Pi. 

4. Monitoring/Collecting data  
- Attach monitor to pi and check debug panel of 
node-red flows.  
- Files saved locally on Pi, can be retrieved using a 
standard USB transfer.  
- Written as a csv file to be used for further analysis.  
- Save csv file somewhere and set immediately to READ ONLY.  
