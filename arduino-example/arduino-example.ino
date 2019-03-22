int M1a = 10;
int M1b = 9;
int M2a = 6;
int M2b = 5;




void setup() {
  Serial.begin(115200);
}

void loop() {
  // nothing to do here yet
}

void serialEvent() {
  String input = Serial.readStringUntil('\n');
  input.trim();

  if (input == "forward") {
    Serial.println("FORWARD!");
    digitalWrite(M1a,HIGH);
    digitalWrite(M1b,LOW);
    digitalWrite(M2a,HIGH);
    digitalWrite(M2b,LOW);
    // go forward
  } else if (input == "left") {
    // go left
  } else if (input == "right") {
    // go right
  } else if (input == "backwards") {
    digitalWrite(M1a,LOW);
    digitalWrite(M1b,HIGH);
    digitalWrite(M2a,LOW);
    digitalWrite(M2b,HIGH);
    // go back
  }
}
