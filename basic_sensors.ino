#define receiverPin A3 
#define buttonPin 2

void setup() {                                
  Serial.begin(9600);  
  pinMode(receiverPin, INPUT);   
  pinMode(buttonPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);                  
}

void loop()                                  
{
  Serial.print("Light Level = ");                    
  Serial.println(read_volts(receiverPin));

  int buttonState = digitalRead(buttonPin);
  if (buttonState)
  	digitalWrite(LED_BUILTIN, HIGH);
  else digitalWrite(LED_BUILTIN, LOW);                    
  delay(1000);                               
}
                                             
float read_volts(int adPin)                       
{                                            
 return float(analogRead(adPin));
}    
