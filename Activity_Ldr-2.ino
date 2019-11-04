  
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
    
    if (value > 100) {
        digitalWrite(LedPin, HIGH);
    };
    
    digitalWrite(LedPin, LOW);
  
Serial.println(value);  
  

  

 

}

