

int xLight = 11; // integer for x light
int yLight = 12; // integer for y light
int zLight = 13; // integer for z light

void setup()
{

    pinMode(yLight, OUTPUT); // y light pin D11
    pinMode(xLight, OUTPUT); // x light pin D12
    pinMode(zLight, OUTPUT); // z light pin D13
}
    
  //Below in the void loop is the code for the lights.
    
void loop()
{
       
    
        
            digitalWrite(xLight, HIGH); // LED on pin 11 set to high
             delay(100); // Wait 100 milliseconds
                digitalWrite(xLight, LOW); // LED on pin 11 set to Low
                  delay(200); // wait 200 milliseconds
                  
               digitalWrite(yLight,HIGH); // LED on pin 12 set to High
                   delay(300); // wait 300 milliseconds
                     digitalWrite(yLight,LOW); // LED on pin 12 set to LOW
                       delay(400); // wait 400 milliseconds
                        
                       digitalWrite(zLight, HIGH); // LED on pin 13 set to High
                           delay(500); // wait 500 milliseconds
                              digitalWrite(zLight, LOW); // LED on pin 13 set to Low
                                  delay(600); // wait 600 milliseconds
                                  
                            
}