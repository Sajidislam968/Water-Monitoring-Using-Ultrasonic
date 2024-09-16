int trigPin = 5;
int echoPin = 18;
  long duration;
  float distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,LOW);
  digitalWrite(trigPin,LOW);
  delay(10);
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.034/2;
  Serial.print(distance);
  Serial.print("\n");
  if(distance<8){
    Serial.print("Water Full");
    digitalWrite(2,HIGH);
    delay(4000);

  }
  delay(1000);

}
