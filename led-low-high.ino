#define myAnodeLed 8
#define myCathodeLed 7 
#define Led_On_Off 1000


void setup() {
  // put your setup code here, to run once:
  pinMode(myAnodeLed, OUTPUT);
  pinMode(myCathodeLed, OUTPUT);
    digitalWrite(myCathodeLed, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(myAnodeLed, HIGH);

  delay(Led_On_Off);

  digitalWrite(myAnodeLed, LOW);

  delay(1000);
}
