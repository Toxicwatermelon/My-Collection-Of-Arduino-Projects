
int uLight = 8; // integer for u light
int vLight = 9; // integer for v light
int wLight = 10; // integer for w light
int xLight = 11; // integer for x light
int yLight = 12; // integer for y light
int zLight = 13; // integer for z light

void setup()
{
    pinMode(uLight, OUTPUT); // u light pin D8
    pinMode(vLight, OUTPUT); // v light pin D9
    pinMode(wLight, OUTPUT); // w light pin D10
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
               digitalWrite(yLight,HIGH); // LED on pin 12 set to High
                   delay(300); // wait 300 milliseconds
                     digitalWrite(yLight,LOW); // LED on pin 12 set to LOW
                       delay(400); // wait 400 milliseconds
                        
                       digitalWrite(zLight, HIGH); // LED on pin 13 set to High
                           delay(500); // wait 500 milliseconds
                              digitalWrite(zLight, LOW); // LED on pin 13 set to Low
                                  delay(600); // wait 600 milliseconds
                                  
            digitalWrite(uLight, HIGH); // LED on pin 11 set to high
             delay(700); // Wait 700 milliseconds
                digitalWrite(uLight, LOW); // LED on pin 11 set to Low
                  delay(800); // wait 800 milliseconds
                  
               digitalWrite(vLight,HIGH); // LED on pin 12 set to High
                   delay(900); // wait 900 milliseconds
                     digitalWrite(vLight,LOW); // LED on pin 12 set to LOW
                       delay(1000); // wait 1000 milliseconds
                        
                       digitalWrite(wLight, HIGH); // LED on pin 13 set to High
                           delay(1100); // wait 1100 milliseconds
                              digitalWrite(wLight, LOW); // LED on pin 13 set to Low
                                  delay(1200); // wait 1200 milliseconds                      
}