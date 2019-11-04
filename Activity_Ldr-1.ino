  
// Define pins.

int LdrPin = A4; 

 

int value = 0;// Creates variables to hold the data we collect.


void setup()
{

Serial.begin(9600);// Turn the serial port on.


}

void loop()
{

// Read the input pin.
  value = analogRead(LdrPin);    

  
  // Print the contents of the variable to the serial monitor.
  Serial.println(value);  
  

  

 

}

