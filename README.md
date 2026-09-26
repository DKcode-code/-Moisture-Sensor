// #  Moisture Sensor
// My Moisture Sensor programming project for our garden at ASU West Valley

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

int sensorPin = A0;
int sensorValue = 0;

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin); //this will analog value from the sensor
  
  Serial.print("Soil Moisture Value: ");
  Serial.println(sensorValue);

  if (sensorValue > 800) {
    Serial.println("Too moist");
  } else if (sensorValue < 300) {
    Serial.println("Too dry");
  } else {
    Serial.println("Good");
   
  }
  

 
}
