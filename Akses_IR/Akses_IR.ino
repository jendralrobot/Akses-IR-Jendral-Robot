/* 
 *  Program Akses Sensor IR 
 *  by Jendral Robot
 *  https://jendralrobot.blogspot.com/
*/

#define PinSensor 12 //OUT Sensor pada Pin 12 Arduino
#define LED 13 //LED indikator pada Arduino Uno
int Sensor; //Variabel pembacaan Input Sensor

void setup() 
{
  Serial.begin(9600);
  pinMode(PinSensor,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() 
{
  Sensor = digitalRead(PinSensor);
  Serial.print("Sensor IR = ");
  Serial.println(Sensor);
  if(Sensor == LOW)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  delay(100); //Jeda pembacaan sensor
}
