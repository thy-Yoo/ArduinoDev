int Reed = 2;
int Led = 9;

void setup()
{
  pinMode(Reed, INPUT);
  pinMode(Led, OUTPUT);
  digitalWrite(Reed,LOW);  
  digitalWrite(Led, LOW); 
  Serial.begin(9600);
  
}

void loop()
{
  if (digitalRead(Reed) == HIGH)
  {
    digitalWrite(Led, HIGH); 
  }
  else
  {
    digitalWrite(Led, LOW); 
  }
  delay(100);
}
