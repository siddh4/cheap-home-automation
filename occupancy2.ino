#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
lcd.begin(16,2);
}

int counter=0;
int flag=0;

void loop() {
  if(analogRead(A0)!=0||analogRead(A1)!=0){
    delay(1500);
      if(analogRead(A2)!=0){
        delay(1500);
          if(analogRead(A3)!=0){
              counter++;
              digitalWrite(10,HIGH);
              flag=1;
              delay(1500);
          }
      }
  }
  if(counter>0){
    lcd.print("Welcome!");
  }
  if(counter==0){
    digitalWrite(10,LOW);
  }
  if(counter<0){
    counter=0;
  }

}
