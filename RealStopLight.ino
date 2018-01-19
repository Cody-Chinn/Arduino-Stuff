#define GREEN 6
#define YELLOW 8
#define RED 10
int delayTime = 3000;
void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GREEN, HIGH);
  delay(delayTime);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(delayTime/2);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(delayTime);
  digitalWrite(RED, LOW);
}
