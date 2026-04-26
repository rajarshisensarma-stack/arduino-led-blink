
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH); 
  digitalWrite(9, LOW); 
  delay(1000);                      
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);   
  delay(1000);                      

