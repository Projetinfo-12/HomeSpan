

#include "HomeSpan.h" // we include HomeSpan
#include "DEV_LED.h" 

void setup(){

  Serial.begin(115200); // we start the monitor at 115200

  homeSpan.begin(Category::Lighting,"Lumière Bureau"); // the name of light

  new SpanAccessory(); // we add an accessory 
    new Service::AccessoryInformation();
      new Characteristic::Identify();   


    new DEV_LED(13); // You can change the value 13 by another Pin       
/*
  new SpanAccessory(); // we add an accessory
   new Service::AccessoryInformation();    
      new Characteristic::Identify();                       

    
    new DEV_LED(27); // You can change the value 27 by another Pin
*/
}

void loop(){
  
  homeSpan.poll(); 
  
}
// You need version 2.X.X.
// To connect, you must type Q to connect to Wi-Fi in the serial monitor.
// The start code is 4663-7726
