int pinA = A4;
int pinB = A2;
int pinC = A0;
int valorA, valorB, valorC;
int a = 13;
int b = 12;
int c = 9;
int d = 10;
int f = 11;
int a2 = 8;
int b2 = 7;
int c2 = 6;
int d2 = 5;
int e2 = 4;
int f2 = 3;
void display_1(int A, int B, int C);
void display_2(int A, int B, int C);

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  pinMode(pinC, INPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(f, OUTPUT);

  pinMode(a2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(f2, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {

  valorA = analogRead(pinA)* 5 / 1023;
  valorB = analogRead(pinB)* 5 / 1023;
  valorC = analogRead(pinC)* 5 / 1023;

  Serial.print("Valor del pin A: ");
  Serial.println(valorA);
  Serial.print("Valor del pin B: ");
  Serial.println(valorB);
  Serial.print("Valor del pin C: ");
  Serial.println(valorC);

  display_1(valorA,valorB,valorC);
  display_2(valorA,valorB,valorC);
}

void display_1(int A, int B, int C){

  if((A == 4 && B < 1) || (A == 4 && C < 1)){
    digitalWrite(a,HIGH);
  }else{
    digitalWrite(a,LOW);
  }
  
  if((A == 4 && B < 1) || (A == 4 && C < 1) || (B < 1 && C < 1)){
    digitalWrite(b,HIGH);
  }else{
    digitalWrite(b,LOW);
  }

  if(B < 1 || C < 1){
    digitalWrite(c,HIGH);
  }else{
    digitalWrite(c,LOW);
  }

  if((A < 1 && B < 1 && C >3) || (A < 1 && B == 4 && C < 1)){
    digitalWrite(d,HIGH);
  }else{
    digitalWrite(d,LOW);
  }

  if((A < 1 && B < 1) || (A < 1 && C < 1)){
    digitalWrite(f,HIGH);
  }else{
    digitalWrite(f,LOW);
  }
}


void display_2(int A, int B, int C){
  if((A == 4 && C < 1) || B < 1){
    digitalWrite(a2,HIGH);
  }else{
    digitalWrite(a2,LOW);
  }

  if((B == 4 && C < 1) || (C == 4 && A == 4 && B < 1) || (C < 1 && A < 1)){
    digitalWrite(b2,HIGH);
  }else{
    digitalWrite(b2,LOW);
  }

  if((C < 1 && A < 1) || B < 1){
    digitalWrite(c2,HIGH);
  }else{
    digitalWrite(c2,LOW);
  }

  if((C == 4 && A < 1 && B < 1) || (C < 1 && A >3)){
    digitalWrite(d2,HIGH);
  }else{
    digitalWrite(d2,LOW);
  }

  if((C == 4 && A == 4 && B < 1) || (B == 4 && A == 4 && C < 1) || (C < 1 && B < 1 && A < 1)){
    digitalWrite(e2,HIGH);
  }else{
    digitalWrite(e2,LOW);
  }

  if(B < 1){
    digitalWrite(f2,HIGH);
  }else{
    digitalWrite(f2,LOW);
  }
}
