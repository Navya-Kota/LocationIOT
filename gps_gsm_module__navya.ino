#include<SoftwareSerial.h>
#include<TinyGPS.h>
#define GPS_RX_PIN 6;
#define GPS_TX_PIN 7;
long lat,lon;
SoftwareSerial gpsSerial(GPS_RX_PIN,GPS_TX_PIN);
TinyGPS gps;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
gpsSerial.begin(9600);
//connect in a reverse way i.e 6th port on arduino to tx of gps &7th port on arduino to rx of gps
pinMode(GPS_RX_PIN,INPUT);
pinMode(GPS_TX_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(gpsSerial.available())
{
  if(gps.encode(gpsSerial.read())
  {
    gps.get_position(&lat,&lon);
    Serial.println("lat: ");
    Serial.print(lat);
    Serial.println("long: ");
    Serial.print(lon);
      
    }
}
}
