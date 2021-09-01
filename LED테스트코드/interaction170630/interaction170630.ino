#include <SparkFun_LED_8x7.h>
#include <Chaplex.h> 

int ledPin = 13; //choose the pin for the LED

int inputPin = 12; // choose the input pin 

byte led_pins[] = {2,3,4,5,6,7,8,9};

/*
const byte heart[] = { 
                       0,0,0,0,1,1,1,0,
                       0,0,0,1,1,1,1,1,
                       0,0,1,1,1,1,1,0,
                       0,1,1,1,1,1,0,0,
                       0,0,1,1,1,1,1,0,
                       0,0,0,1,1,1,1,1,
                       0,0,0,0,1,1,1,0 };
                       */

 const byte heart[] = { 
                       0,0,1,1,1,0,0,0,
                       0,1,1,1,1,1,0,0,
                       0,1,1,1,1,1,1,0,
                       0,0,1,1,1,1,1,1,
                       0,1,1,1,1,1,1,0,
                       0,1,1,1,1,1,0,0,
                       0,0,1,1,1,0,0,0 };

 const byte anime1_heart[] = { 
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,1,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0 };
 const byte anime2_heart[] = { 
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,1,0,
                       0,0,0,0,0,0,1,1,
                       0,0,0,0,0,0,1,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0 };
 const byte anime3_heart[] = { 
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,1,0,0,
                       0,0,0,0,0,1,1,0,
                       0,0,0,0,0,1,1,1,
                       0,0,0,0,0,1,1,0,
                       0,0,0,0,0,1,0,0,
                       0,0,0,0,0,0,0,0 };
 const byte anime4_heart[] = { 
                       0,0,0,0,1,0,0,0,
                       0,0,0,0,1,1,0,0,
                       0,0,0,0,1,1,1,0,
                       0,0,0,0,1,1,1,1,
                       0,0,0,0,1,1,1,0,
                       0,0,0,0,1,1,0,0,
                       0,0,0,0,1,0,0,0 };                      
const byte anime5_heart[] = { 
                       0,0,0,1,1,0,0,0,
                       0,0,0,1,1,1,0,0,
                       0,0,0,1,1,1,1,0,
                       0,0,0,1,1,1,1,1,
                       0,0,0,1,1,1,1,0,
                       0,0,0,1,1,1,0,0,
                       0,0,0,1,1,0,0,0 }; 
 const byte anime6_heart[] = { 
                       0,0,1,1,1,0,0,0,
                       0,0,1,1,1,1,0,0,
                       0,0,1,1,1,1,1,0,
                       0,0,0,1,1,1,1,1,
                       0,0,1,1,1,1,1,0,
                       0,0,1,1,1,1,0,0,
                       0,0,1,1,1,0,0,0 }; 
 const byte anime7_heart[] = { 
                       0,0,1,1,1,0,0,0,
                       0,1,1,1,1,1,0,0,
                       0,0,1,1,1,1,1,0,
                       0,0,0,1,1,1,1,1,
                       0,0,1,1,1,1,1,0,
                       0,1,1,1,1,1,0,0,
                       0,0,1,1,1,0,0,0 };
 const byte anime8_heart[] = { 
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0,
                       0,0,0,0,0,0,0,0 };                    
                          


int val = 0; // variable for reading the pin status 
void setup() { 
   Plex.init(led_pins);
   //Plex.init(heart);  
   Plex.clear(); 
   Plex.display(); 
  pinMode(inputPin, INPUT); // declare pushbutton as input
  
  pinMode(ledPin, OUTPUT); // declare LED as output
  pinMode(led_pins, OUTPUT); // declare LED as output

  
} 
void loop() {
   
 
  
 
   
  val = digitalRead(inputPin); // read input value 
  if (val == HIGH) { // check if the input is HIGH 
    digitalWrite(ledPin, HIGH); // turn LED ON

  Plex.drawBitmap(anime1_heart);   Plex.display();   delay(450);

  Plex.drawBitmap(anime2_heart);   Plex.display();   delay(450);

  Plex.drawBitmap(anime3_heart);   Plex.display();   delay(450);

  Plex.drawBitmap(anime4_heart);   Plex.display();   delay(450);

  Plex.drawBitmap(anime5_heart);   Plex.display();   delay(450);

  Plex.drawBitmap(anime6_heart);   Plex.display();   delay(450);

  Plex.drawBitmap(anime7_heart);   Plex.display();   delay(1000);

  Plex.drawBitmap(anime8_heart);   Plex.display();   
  

    
  } 
  else {
    digitalWrite(ledPin, LOW); // turn LED OFF
  }
}

