#define myLed 8
#define on 1000 
#define off 200 


void setup() {
  // put your setup code here, to run once:
  pinMode(myLed, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(myLed,HIGH);
delay(on);
digitalWrite(myLed, LOW);
delay(off);
}
