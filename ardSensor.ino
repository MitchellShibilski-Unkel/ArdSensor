
class Ultrasonic {
private:
  int trigPin;
  int echoPin;
  int duration = 0;
  float distance = 0.0;

public:
  void begin(int trigPin, int echoPin) {
    Serial.begin(9600);

    // Setup trig and echo
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
  }

  void getData() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Get the distance
    duration = pulseIn(echoPin, HIGH);
    distance = ((float) (duration)) / 58.2;

    // Print out the distance
    Serial.print("Distance = ");
    Serial.println(distance);

    // Return distance
    return distance;
  }
};

class IR {
private:
  int value;
  const char* irPin;

public:
  void begin(const char* irPin) {
    int value;

    // Setup ir
    pinMode(irPin, INPUT);
  }

  void getValue() {
    // Get the value from the ir pin
    value = digitalRead(irPin);

    // Return value
    return value;
  }
};