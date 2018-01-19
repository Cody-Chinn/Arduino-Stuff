#include <pitches.h>

#define D4 3
#define E4 4
#define F4 5
#define G4 6
#define A4 7
#define B4 8
#define C5 9
#define D5 10
#define E5 11
#define F5 12
#define G5 13
//                0         1         2       3       4         5       6         7         8         9     10    LAST NOTE  
int melody[] = {NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_B5 };
int pin = 2; // pin for buzzer
int duration = 250; // Set for an eigth note

void setup() {
  // put your setup code here, to run once:
  //setup led pins to output
  pinMode(pin, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(E4, OUTPUT);
  pinMode(F4, OUTPUT);
  pinMode(G4, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(B4, OUTPUT);
  pinMode(C5, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(E5, OUTPUT);
  pinMode(F5, OUTPUT);
  pinMode(G5, OUTPUT);

  //turn on first light
  digitalWrite(F4, HIGH);
  digitalWrite(E4, LOW);
  digitalWrite(G4, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(B4, LOW);
  digitalWrite(C5, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(E5, LOW);
  digitalWrite(F5, LOW);
  digitalWrite(G5, LOW);
}

void loop() {
  //Begin first measure
  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration);
  delay(duration);
  digitalWrite(F4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration*2);
  delay(duration*2);
  digitalWrite(B4, LOW);

  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration);
  delay(duration);
  digitalWrite(F4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration*2);
  delay(duration*2);
  digitalWrite(B4, LOW);
  // End first measure
  
  // Begin second measure
  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration);
  delay(duration);
  digitalWrite(F4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);

  digitalWrite(E5, HIGH);
  tone(pin, melody[8], duration);
  delay(duration);
  digitalWrite(E5, LOW);
  
  digitalWrite(D5, HIGH);
  tone(pin, melody[7], duration*2);
  delay(duration*2);
  digitalWrite(D5, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW); 

  digitalWrite(C5, HIGH);
  tone(pin, melody[6], duration);
  delay(duration);
  digitalWrite(C5, LOW); 
  // End second measure
  
  //Start third measure
  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);

  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration);
  delay(duration);
  digitalWrite(G4, LOW);

  digitalWrite(E4, HIGH);
  tone(pin, melody[1], duration*5);
  delay(duration*5);
  digitalWrite(E4, LOW);

  digitalWrite(D4, HIGH);
  tone(pin, melody[0], duration);
  delay(duration);
  digitalWrite(D4, LOW);
  // End third measure

  // Start fourth measure
  digitalWrite(E4, HIGH);
  tone(pin, melody[1], duration);
  delay(duration);
  digitalWrite(E4, LOW);

  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration);
  delay(duration);
  digitalWrite(G4, LOW);

  digitalWrite(E4, HIGH);
  tone(pin, melody[1], duration*5);
  delay(duration*5);
  digitalWrite(E4, LOW);
  // End fourth measure

  // Start fifth measure
  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration);
  delay(duration);
  digitalWrite(F4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration*2);
  delay(duration*2);
  digitalWrite(B4, LOW);

  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration);
  delay(duration);
  digitalWrite(F4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration*2);
  delay(duration*2);
  digitalWrite(B4, LOW);
  // End fifth measure

  // Start sixth measure
  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration);
  delay(duration);
  digitalWrite(F4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);

  digitalWrite(E5, HIGH);
  tone(pin, melody[8], duration);
  delay(duration);
  digitalWrite(E5, LOW);
  
  digitalWrite(D5, HIGH);
  tone(pin, melody[7], duration*2);
  delay(duration*2);
  digitalWrite(D5, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW); 

  digitalWrite(C5, HIGH);
  tone(pin, melody[6], duration);
  delay(duration);
  digitalWrite(C5, LOW); 
  // End sixth measure

  // Start seventh measure
  digitalWrite(E5, HIGH);
  tone(pin, melody[8], duration);
  delay(duration);
  digitalWrite(E5, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);

  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration*2);
  delay(duration*2);
  digitalWrite(G4, LOW);

  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration*3);
  delay(duration*3);
  digitalWrite(G4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);
  // End seventh measure

  // Start eigth measure
  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration);
  delay(duration);
  digitalWrite(G4, LOW);

  digitalWrite(D4, HIGH);
  tone(pin, melody[0], duration);
  delay(duration);
  digitalWrite(D4, LOW);
  
  digitalWrite(E4, HIGH);
  tone(pin, melody[1], duration*5);
  delay(duration*5);
  digitalWrite(E4, LOW);
  // End eigth measure

  // Start ninth measure
  digitalWrite(D4, HIGH);
  tone(pin, melody[0], duration);
  delay(duration);
  digitalWrite(D4, LOW);

  digitalWrite(E4, HIGH);
  tone(pin, melody[1], duration);
  delay(duration);
  digitalWrite(E4, LOW);

  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration*2);
  delay(duration*2);
  digitalWrite(F4, LOW);

  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration);
  delay(duration);
  digitalWrite(G4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration*2);
  delay(duration*2);
  digitalWrite(B4, LOW);
  // End ninth measure

  // Start tenth measure
  digitalWrite(C5, HIGH);
  tone(pin, melody[6], duration);
  delay(duration);
  digitalWrite(C5, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);

  digitalWrite(E4, HIGH);
  tone(pin, melody[1], duration*5);
  delay(duration*5);
  digitalWrite(E4, LOW);
  // End tenth measure

  // Start eleventh measure
  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration);
  delay(duration);
  digitalWrite(F4, LOW);

  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration);
  delay(duration);
  digitalWrite(G4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration*2);
  delay(duration*2);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);

  digitalWrite(C5, HIGH);
  tone(pin, melody[6], duration);
  delay(duration);
  digitalWrite(C5, LOW);

  digitalWrite(D5, HIGH);
  tone(pin, melody[7], duration*2);
  delay(duration*2);
  digitalWrite(D5, LOW);
  // End eleventh measure

  // Start twelth measure
  digitalWrite(E5, HIGH);
  tone(pin, melody[8], duration);
  delay(duration);
  digitalWrite(E5, LOW);

  digitalWrite(F5, HIGH);
  tone(pin, melody[9], duration);
  delay(duration);
  digitalWrite(F5, LOW);

  digitalWrite(G5, HIGH);
  tone(pin, melody[10], duration*5);
  delay(duration*5);
  digitalWrite(G5, LOW);
  // End twelth measure

  // Start thirteenth measure
  digitalWrite(D4, HIGH);
  tone(pin, melody[0], duration);
  delay(duration);
  digitalWrite(D4, LOW);

  digitalWrite(E4, HIGH);
  tone(pin, melody[1], duration);
  delay(duration);
  digitalWrite(E4, LOW);

  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration*2);
  delay(duration*2);
  digitalWrite(F4, LOW);

  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration);
  delay(duration);
  digitalWrite(G4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration*2);
  delay(duration*2);
  digitalWrite(B4, LOW);
  // End thirteenth measure

  // Start fourteenth measure
  digitalWrite(C5, HIGH);
  tone(pin, melody[6], duration);
  delay(duration);
  digitalWrite(C5, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);

  digitalWrite(E4, HIGH);
  tone(pin, melody[1], duration*5);
  delay(duration*5);
  digitalWrite(E4, LOW);
  // End fourteenth measure

  // Start fifteenth measure
  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration);
  delay(duration);
  digitalWrite(G4, LOW);

  digitalWrite(F4, HIGH);
  tone(pin, melody[2], duration);
  delay(duration);
  digitalWrite(F4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(G4, HIGH);
  tone(pin, melody[3], duration);
  delay(duration);
  digitalWrite(G4, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);

  digitalWrite(A4, HIGH);
  tone(pin, melody[4], duration);
  delay(duration);
  digitalWrite(A4, LOW);

  digitalWrite(C5, HIGH);
  tone(pin, melody[6], duration);
  delay(duration);
  digitalWrite(C5, LOW);

  digitalWrite(B4, HIGH);
  tone(pin, melody[5], duration);
  delay(duration);
  digitalWrite(B4, LOW);
  // End measure 15

  // Start measure 16
  digitalWrite(D5, HIGH);
  tone(pin, melody[7], duration);
  delay(duration);
  digitalWrite(D5, LOW);

  digitalWrite(C5, HIGH);
  tone(pin, melody[6], duration);
  delay(duration);
  digitalWrite(C5, LOW);

  digitalWrite(E5, HIGH);
  tone(pin, melody[8], duration);
  delay(duration);
  digitalWrite(E5, LOW);

  digitalWrite(D5, HIGH);
  tone(pin, melody[7], duration);
  delay(duration);
  digitalWrite(D5, LOW);

  digitalWrite(F5, HIGH);
  tone(pin, melody[9], duration);
  delay(duration);
  digitalWrite(F5, LOW);

  digitalWrite(E5, HIGH);
  tone(pin, melody[8], duration);
  delay(duration);
  digitalWrite(E5, LOW);

  digitalWrite(E5, HIGH);
  tone(pin, melody[8], duration/2);
  delay(duration/2);
  digitalWrite(E5, LOW);

  digitalWrite(F5, HIGH);
  tone(pin, melody[9], duration);
  delay(duration);
  digitalWrite(F5, LOW);

  digitalWrite(D5, HIGH);
  tone(pin, melody[7], duration/2);
  delay(duration/2);
  digitalWrite(D5, LOW);
  // End measure 16

  // Start measure 17
  digitalWrite(E5, HIGH);
  tone(pin, melody[8], duration*12);
  delay(duration*12);
  digitalWrite(E5, LOW);
  // End measure 17

  // Start Measure 18
  delay(duration*2); // Quarter rest
  
  tone(pin, melody[11], duration/2);
  
  digitalWrite(F4, HIGH);
  digitalWrite(E4, HIGH);
  digitalWrite(G4, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(B4, HIGH);
  digitalWrite(C5, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(E5, HIGH);
  digitalWrite(F5, HIGH);
  digitalWrite(G5, HIGH);
  delay(duration/2);
  
  digitalWrite(F4, LOW);
  digitalWrite(E4, LOW);
  digitalWrite(G4, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(B4, LOW);
  digitalWrite(C5, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(E5, LOW);
  digitalWrite(F5, LOW);
  digitalWrite(G5, LOW);
  delay(duration/2);
}
