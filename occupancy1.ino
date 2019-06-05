#include <LiquidCrystal.h>

const int rs = 1, en = 2, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


int counter=0,time1,time2;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorvalue1= analogRead(A5);
int sensorvalue2= analogRead(A1);

float voltage1 = sensorvalue1*(5.0/1023.0);
float voltage2 = sensorvalue2*(5.0/1023.0);
  const float set1= voltage1;
  const float set2= voltage2;
  if(voltage1=! set1)
    float time1= millis();
  if(voltage2=! set2)
    float time2= millis();

    if( abs(time1-time2)<=1){
      if(time1-time2>0){
        counter--;
      }
      else if(time2-time1>0){
        counter++;
      
      }
    }
    lcd.print("there are ");
    lcd.print(counter);
    lcd.print("people in the room");
    delay(9000);
    lcd.clear();
}
