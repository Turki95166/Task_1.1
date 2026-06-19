// Task 1.1P: Switching ON Lights
// Porch LED: 30s | Hallway LED: 60s

const int SWITCH_PIN = 2;
const int PORCH_LED = 8;
const int HALLWAY_LED = 9;

void setup() {
  pinMode(SWITCH_PIN, INPUT_PULLUP);
  pinMode(PORCH_LED, OUTPUT);
  pinMode(HALLWAY_LED, OUTPUT);
}

void loop() {
  if (digitalRead(SWITCH_PIN) == LOW) { // Switch is ON
    startLights();
    controlLights();
  } else {
    turnOffLights();
  }
}

void startLights() {
  digitalWrite(PORCH_LED, HIGH);
  digitalWrite(HALLWAY_LED, HIGH);
}

void controlLights() {
  // Logic for 30s / 60s timing
  delay(30000); // Porch stays on for 30s
  digitalWrite(PORCH_LED, LOW);
  delay(30000); // Hallway stays for additional 30s to make 60s total
  digitalWrite(HALLWAY_LED, LOW);
}

void turnOffLights() {
  digitalWrite(PORCH_LED, LOW);
  digitalWrite(HALLWAY_LED, LOW);
}
