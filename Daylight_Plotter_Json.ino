// Add a time get IC to give timeStamps



#include <ArduinoJson.h>

const int photoInPin1 = 14;
const int photoInPin2 = 15;
const int photoInPin3 = 16;
//const int resetValsPin = 2;

float photoVal1, photoVal2, photoVal3;
float LD1, LD2, LD3;
//float maxVal, minVal = 512;


void setup()
{
  Serial.begin(9600);
  pinMode(photoInPin1, INPUT);
  pinMode(photoInPin2, INPUT);
  pinMode(photoInPin3, INPUT);
}


void loop()
{
  photoVal1 = analogRead(photoInPin1);
  photoVal2 = analogRead(photoInPin2);
  photoVal3 = analogRead(photoInPin3);

  LD1 = (float)map(photoVal1, 0, 1023, 0, 255);
  LD2 = (float)map(photoVal2, 0, 1023, 0, 255);
  LD3 = (float)map(photoVal3, 0, 1023, 0, 255);

//  fixAxis();

//  Serial.print(LD1);
//  Serial.print(" ");
//  Serial.print(LD2);
//  Serial.print(" ");
//  Serial.println(LD3);
//  Serial.print(" ");
//  delay(100);


//  if (Serial.read() == 'j')
//  {
//    DynamicJsonBuffer jBuffer;
//    JsonObject& root = jBuffer.createObject();
//
//    root["day"] = "Monday";
//
//    int temp = 21;
//    int humidity = 53;
//
//    root["temperature"] = temp;
//    root["humidity"] = humidity;
//
//    root.prettyPrintTo(Serial);
//    Serial.println();
//  }
}

void fixAxis()
{
  Serial.print(0);
  Serial.print(" ");
  Serial.print(255);
  Serial.print(" ");
}
