// -----------------------------
// Smart Parking Assistant v1
// -----------------------------

// Pin Definitions
const int TRIG_PIN = 9;
const int ECHO_PIN = 10;

const int LED_PIN = 7;
const int BUZZER_PIN = 6;

// Constants
const float SPEED_OF_SOUND = 0.0343;
const long TIMEOUT = 30000;

void setup() {

  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {

  float distance = getDistance();

  if (distance == -1) {

    Serial.println("No object detected");

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    delay(100);

    return;
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  parkingFeedback(distance);
}

// -------------------------------------------

float getDistance() {

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long echoDuration = pulseIn(ECHO_PIN, HIGH, TIMEOUT);

  if (echoDuration == 0)
    return -1;

  return (echoDuration * SPEED_OF_SOUND) / 2.0;
}

// -------------------------------------------

void parkingFeedback(float distance) {

  // SAFE
  if (distance > 30) {

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    delay(100);
  }

  // WARNING
  else if (distance > 15) {

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    delay(500);

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    delay(500);
  }

  // DANGER
  else if (distance > 5) {

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    delay(150);

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    delay(150);
  }

  // STOP
  else {

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
  }
}