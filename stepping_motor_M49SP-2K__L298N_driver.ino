#define in1 8
#define in2 9
#define in3 10
#define in4 11
#define enA 3 
#define enB 5

int dl = 50; //delay time

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT); //ШИМ
  pinMode(enB, OUTPUT); //ШИМ
  analogWrite(enA, 255);
  analogWrite(enB, 255);
}

void loop() {
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW); 
  digitalWrite(in3, LOW); 
  digitalWrite(in4, HIGH); 
  delay(dl);
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, HIGH); 
  digitalWrite(in3, LOW); 
  digitalWrite(in4, LOW); 
  delay(dl);
  digitalWrite(in1, LOW); 
  digitalWrite(in2, HIGH); 
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, LOW); 
  delay(dl);
  digitalWrite(in1, LOW); 
  digitalWrite(in2, LOW); 
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, HIGH); 
  delay(dl);
}
