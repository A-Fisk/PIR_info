

String ID = "VVEEG_1"; // Data header


// set up which pins are for each PIR
int LDRPin = A0;
int PIR1 = 2;
int PIR2 = 7;
int PIR3 = 5;
int PIR4 = 6;




//set up counters to count the activity
int PIRCounter1 = 0;  //acitivty counter for PIR1
int PIRCounter2 = 0;  //acitivty counter for PIR2
int PIRCounter3 = 0;  //acitivty counter for PIR3
int PIRCounter4 = 0;  //acitivty counter for PIR4
int LoopCounter = 0; //loopcounter for activity

void setup() {
  Serial.begin(115200);
  // give time for startup
  delay(2000);
  // provide data labels for serial monitor on the computer

}


// This next section is the one that runs in a loop constantly,
// taking readings every tenth of a second 
void loop() {

  // read all the input pins:
  int PIRState1 = digitalRead(PIR1);
  int PIRState2 = digitalRead(PIR2);
  int PIRState3 = digitalRead(PIR3);
  int PIRState4 = digitalRead(PIR4);

   if (LoopCounter <100) {  // measurements will keep looping
                            //until 10 sec is up (100 x 100 msec)
    // if the state is high, increment the relevent PIRcounter
      if (PIRState1 == HIGH) {
      // e.g. if the current state is HIGH 
      // then the increment PIR1 counter:
      PIRCounter1++;
    }
    if (PIRState2 == HIGH) {
      PIRCounter2++;
    }
    if (PIRState3 == HIGH) {
      PIRCounter3++;
    }
    if (PIRState4 == HIGH) {
      PIRCounter4++;
    }


      delay(99);  // wait msec =Timer
              // before polling inputs again. 
              // this timing can be varied to ensure consistent
              // 10sec updates.
       LoopCounter++;
  }
  // put your main code here, to run repeatedly:


else {
     delay(92);
  //send HEADER indicating data follows
    Serial.print(ID);
  // separate with a comma
    Serial.print(",");
  // send total activity for PIR counters, separated by commas
    Serial.print(PIRCounter1);
    Serial.print(",");
    Serial.print(PIRCounter2);
    Serial.print(",");
    Serial.print(PIRCounter3);
    Serial.print(",");
    Serial.print(PIRCounter4);
    // add in two negative values to get to 6 columns and consistent 
    // with analysis scripts
    Serial.print(",");
    Serial.print(-10);
    Serial.print(",");
    Serial.print(-10);
    Serial.print(","); 
    // read Light-dependant resistor (LDR) connected to
    //analog pin 2 and send resulting number
    Serial.print(analogRead(LDRPin));
    Serial.print(",");
    Serial.print('\n'); // new line (linefeed) character
       LoopCounter = 0; // reset your loops
       PIRCounter1=0;  // and your individual counters
       PIRCounter2=0;
       PIRCounter3=0;
       PIRCounter4=0;
  
  } 
}
