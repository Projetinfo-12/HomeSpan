

#include "HomeSpan.h" // on include HomeSpan
#include "DEV_LED.h" 

void setup(){

  Serial.begin(115200); // on démarrerle moniteur a 115200

  homeSpan.begin(Category::Lighting,"Lumière Bureau"); // le non de la lumière

  new SpanAccessory(); // on ajouter un accessory 
    new Service::AccessoryInformation();
      new Characteristic::Identify();   


    new DEV_LED(13); // Vous pouver modifier la valeur 13 par un auter Pin       
/*
  new SpanAccessory(); // on ajouter un accessory
   new Service::AccessoryInformation();    
      new Characteristic::Identify();                       

    
    new DEV_LED(27); // Vous pouver modifier la valeur 27 par un auter Pin
*/
}

void loop(){
  
  homeSpan.poll(); 
  
}
// il faut la version 2.X.X
// Pour se connectés il faut fair Q pour pouvoir se connectés au Wifi dans le moniteur série
// le code du débu est 4663-7726