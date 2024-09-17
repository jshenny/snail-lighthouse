int ledPin = 2;
int ledPin2 = 4;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin,  OUTPUT);
    pinMode(ledPin2,  OUTPUT);
}

void loop() {
    int value = analogRead(A0);

    Serial.println("Analog  Value: ");
    Serial.println(value);
    
    if (value > 250) {
        digitalWrite(ledPin, LOW);
        digitalWrite(ledPin2, LOW);
    } else {
        digitalWrite(ledPin,  HIGH);
        digitalWrite(ledPin2,  HIGH);
    }
    
    delay(250);
}
