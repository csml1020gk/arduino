
int countON = 0;
int countOFF = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
Serial.begin(9600);
Serial.println("Hello this is my blink project. My led will be turned on after 3 2 1");
Serial.println("3");
  delay(1000);


}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i <24; i++)
  {
    if(i == 12)
    {
      digitalWrite(13, HIGH);
      Serial.print("LED ON");
      Serial.print(countON++);
      delay(1000);
      }

     else
     {
       digitalWrite(13, LOW);
       delay(1000);
     }
     }

}
