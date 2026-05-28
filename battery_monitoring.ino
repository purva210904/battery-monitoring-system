int sensorValue = 0;
float voltage = 0;

void setup() {
Serial.begin(9600);
}

void loop() {
sensorValue = analogRead(A0);

voltage = sensorValue * (5.0 / 1023.0);

Serial.print("Battery Voltage: ");
Serial.println(voltage);

if (voltage < 3.0) {
Serial.println("Low Battery Warning!");
}

delay(1000);
}
