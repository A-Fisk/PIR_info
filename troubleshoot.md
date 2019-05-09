# Troubleshooting PIR system 

Welcome to troubleshooting, my own personal hell.
This can be tedious and annoying but hopefully we can 
get through it.  
My main lesson about troubleshooting these systems is the following:  
*These break a lot*   
My default response is assume it's broken and remake the sensors, 
cables, and circuit board, in that order.  





### The system  
The system reads the value of each PIR every 1 second for 1 milisecond 
at a time, then sums up these values for 10 seconds and 
provides the 10 second value for each PIR (time bin can be altered). 
It works by measuring whether there is any change in the infrared
radiation reaching the sensor at any given time, if the sensor detects 
change it reads high.
Reading high completes a circuit with the 5v input so it 
registeres a 5v signal at that port, which the sketch then 
reads as high as well. 
  
My workflow is usually plug in all sensors into arduino, then 
check which one is connected to the LDR. 
Can either change the port listened to on the sketch or change the 
LDR containing sensor on the circuit board. 
If can't get the LDR working, problem a problem with the board. 
Next is to hide all the sensors, and wave at one at a time to see 
whether it reads and where in the file it shows up. 
That usually picks up the main problems.   
  
The problems I've found tend to fall into a few areas.  
1. Sensor/board/cable is broken.  
  - tends to show up as essentially random variables. 
  - no change in response to any kind of movement, sometimes 
sticks to a single value (0/100) but usually changes when the 
board is touched.  
  - Each port shows a different number though, 
ldr constantly changing  
  - Response is to replace the broken bit.  
2. Wrong port alignment.  
  - Results in all values registering as low or high depending on 
alignment as already completed 5v/never completing circuit.  
  - check alignment.  
3. LDR short circuiting.  
  - SOmetimes LDR can start reading randomly, or just stay high or 
low.  
  - Most often due to the legs of the LDR touching and shorting out.  
  - Easily avoided by cutting the LDR legs shorter  
4. Default reaction is to replace all if can't get it to work.  


Anything further will be added as we come across it. 
Next step is to check the 
[paper](https://wellcomeopenresearch.org/articles/1-2/v2)
as it has some troubleshooting in the supplementary info. 
Feel free to contact if not making any progress. 

