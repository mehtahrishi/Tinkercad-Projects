/*This sketch changes the color of the led based on the temperature
this code is made to work with DHT11 sensor
the TMP sensor is only a place holder for the Dht sensor 
*/ 

#include <DHT.h>
#define DHTPIN 7
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

int ledR=11;
int ledG=9;
int ledB=10;
int map1;
int map2;
int map3;

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" °C");

  if(h>0 && h<=20){
    analogWrite (ledR,100);
    analogWrite (ledG,0);
    analogWrite (ledB,0);
  }
  
  if(h>20 && h<=30){
    analogWrite (ledR,0);
    analogWrite (ledG,100);
    analogWrite (ledB,0);
  }
  
  if(h>30 && h<=40){
    analogWrite (ledR,0);
    analogWrite (ledG,0);
    analogWrite (ledB,100);
  }
}