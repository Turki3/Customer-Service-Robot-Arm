#include <Servo.h>


Servo servo1,servo2,servo3,servo4,servo5,servo6;

void setup()
{

  servo1.attach(2);
  servo2.attach(12);
  servo3.attach(3);
  servo4.attach(13);
  servo5.attach(4);
  servo6.attach(11);
}


int i=0,s=90,e=90,w=0; // initial position of shoulder, elbow and wrist respectively

  void loop (){
   //First move: Shake hands with the right hand of the robot
    for (i = 0; i <= 45; i += 1){

      
      servo2.write(i+s);              
      
      delay(20);
    
     
      
    
     servo4.write(i+e);             
      
      delay(20);
    
    
    
     servo6.write(i+w);              
      
      delay(20);
   
 
  }
    
    delay(20);
    
    //Second move: wave with both hands
    for (i = 0; i <= 90; i += 1){

      servo1.write(i+s);              
      
      delay(20);
      
      servo2.write(i+s);              
      
      delay(20);
    
     servo3.write(i+e);              
      
      delay(20);
    
     servo4.write(i+e);              
      
      delay(20);
    
     servo5.write(i+w);              
      delay(20);
    
     servo6.write(i+w);           
      
      delay(20);
    }
//third move: Thumb up with both hands
    for (i = 0; i <= 45; i += 1){

      servo1.write(i+s);              
      
      delay(20);
      
      servo2.write(i+s);              
      
      delay(20);
    
     servo3.write(i+e);              
      
      delay(20);
    
     servo4.write(i+e);              
      
      delay(20);
    
     servo5.write(i+w);              
      delay(20);
    
     servo6.write(i+w);           
      
      delay(20);
    }
 
  

}