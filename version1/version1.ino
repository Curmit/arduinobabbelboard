
const int input1  = 2;
const int input2 = 4;
const int output = 12;
const int output2 = 8;



void setup() {
  // put your setup code here, to run once:
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
  pinMode(output, OUTPUT);
  pinMode(output2,OUTPUT);
  digitalWrite(input1, HIGH);
  digitalWrite(input2, HIGH);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:


  int reading = digitalRead(input1);
  int reading2 = digitalRead(input2);
 
  
  if (reading == LOW) {
    Serial.println("Switch 1 is on");
  }

  if (reading2 == LOW) {
    Serial.println("switch2 is on");

  }


 
}
///Serial.println(reading2);



