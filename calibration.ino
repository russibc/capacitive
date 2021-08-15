const int MOISTURE_ANALOGIC_IN = A0; // Arduino's analogic pin
const int BOARD_RESOLUTION = 1024; // The analogic board resolution, for example Arduino Uno is 10 bit (from 0 to 1023)
const float OPERATIONAL_VOLTAGE = 5.0; // The default Arduino voltage
const float MAX_SENSOR_VOLTAGE = 3.0; // The maximum voltage that the sensor can output
const float SENSOR_READ_RATIO = OPERATIONAL_VOLTAGE / MAX_SENSOR_VOLTAGE; // The ratio betwent the two voltages

const int dry = 511;
const int wet = 340;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int moistureAnalogicVal = analogRead(MOISTURE_ANALOGIC_IN) * SENSOR_READ_RATIO;
  Serial.println(moistureAnalogicVal);
  delay(1000);
}
