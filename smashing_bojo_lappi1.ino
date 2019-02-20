void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(100); //s1
  digitalWrite(9, LOW);
  delay(100); // 
  digitalWrite(9, HIGH);
  delay(100); // s2
  digitalWrite(9, LOW);
  delay(100); // 
  digitalWrite(9, HIGH);
  delay(100); // s3
  digitalWrite(9, LOW);
  delay(100); // 
  
  digitalWrite(9, HIGH);
  delay(300); // o1
  digitalWrite(9, LOW);
  delay(100); // 
  digitalWrite(9, HIGH);
  delay(300); // o2
  digitalWrite(9, LOW);
  delay(100); //
  digitalWrite(9, HIGH);
  delay(300); // o3
  digitalWrite(9, LOW);
  delay(100); //
  
  delay(100); // s1
  digitalWrite(9, LOW);
  delay(100); // 
  delay(100); // s2
  digitalWrite(9, LOW);
  delay(100); // 
  digitalWrite(9, HIGH);
  delay(100); // s3
  digitalWrite(9, LOW);
  delay(300); // 
}