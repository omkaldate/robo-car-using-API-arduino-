char in ;
String data;
int led;
void setup ()
{
    Serial.begin(9600);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(13,OUTPUT);
    
   }
void loop()
{
    while (Serial.available()){
      digitalWrite(13 , HIGH);
      delay(50);
      in=Serial.read();
      delay(10);
      data += in;
           }
     digitalWrite(13 , LOW);
     Serial.print(data);
   
   if (data.length() > 0){
    
     if((data == "go") || (data == "go forth")|| (data=="a")){           // for forth
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
     }
       if ((data == "back") || (data == "come back")||(data=="d")){     //for back
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
     }
       if ((data == "left") || (data == "turn left")||(data=="b")) {   //for left
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        delay(500);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
      if ((data == "right") || (data  == "turn right")||(data=="c")) {  // for right
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        delay(500);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
     if(data == "f"){                        // mid f&l - 45`     
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        delay(200);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
      if(data == "g"){                        // mid f&r - 45`    
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        delay(200);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
      if(data == "k"){                        // small turn to left - 25`
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        delay(50);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
      if(data == "l"){                        // small turn to right - 25`     
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        delay(50);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
     if(data == "i"){                        // mid l&b    
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        delay(700);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
      if(data == "j"){                        // mid r&b     
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        delay(700);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
    
   
      if ((data == "stop") || (data == "break")||(data=="e")){         //for stop
      digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
     }
      if ((data == "h o r n") || (data == "horn")||(data=="h")){      //for horn
           digitalWrite(6,HIGH);
           delay(1000);
           digitalWrite(6,LOW);      
     }
         
   }
data = "" ;
}
