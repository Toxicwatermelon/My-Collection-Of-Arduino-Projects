  
// Define pins.

int LdrPin = A4; 
int LedPin = 8;
 

int value = 0;// Creates variables to hold the data we collect.


void setup()
{
Serial.begin(9600);
pinMode(LedPin, OUTPUT);


}

void loop()
{

// Read the input pin.
  value = analogRead(LdrPin);    
    

           digitalWrite(LedPin, HIGH);
    if (value > 200) {
        digitalWrite(LedPin,LOW);
        tone(3, 900,100);
    }
    

  
Serial.println(value);  
  

  

 

}

