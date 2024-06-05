int analogValue1 = 0;
int analogValue2 = 0;
int difference = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  analogValue1 = analogRead(A1);
  analogValue2 = analogRead(A2);
  analogValue2 -= 10;

  Serial.print("analogvalue1 ");
  Serial.println(analogValue1);
  Serial.print("analogvalue2 ");
  Serial.println(analogValue2);
  

  difference = analogValue1 - analogValue2;
  if ( difference > 0)
  {
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    delay(1000);
  } else {
    digitalWrite(4, HIGH);
    digitalWrite(2, LOW);
    delay(1000);
  }
  
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(50);
}
