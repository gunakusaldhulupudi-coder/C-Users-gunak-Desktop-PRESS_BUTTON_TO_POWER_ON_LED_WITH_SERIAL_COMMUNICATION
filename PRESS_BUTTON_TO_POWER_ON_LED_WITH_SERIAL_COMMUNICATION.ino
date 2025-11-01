#define LED_PIN 11
#define BUTTON_PIN 2


void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);

}

void loop() {
  if (digitalRead(BUTTON_PIN)== HIGH){
    digitalWrite(LED_PIN, HIGH);
    Serial.println("led is on");
    }
  else{
    digitalWrite(LED_PIN, LOW);
    Serial.println("led is off");
  }  

}
