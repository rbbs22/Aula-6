
char leitor;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    leitor = Serial.read();
    if (leitor == 'a') {
      digitalWrite (13, HIGH);
    }
    if (leitor == 's') {
      digitalWrite (13, LOW);
    }
    if (leitor == 'q') {
      digitalWrite (12, HIGH);
    }
    if (leitor == 'w') {
      digitalWrite (12, LOW);
    }
  }
}
