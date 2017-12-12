
const int input1  = 2;// row 1
const int input2 = 4;// row 2
const int col1 = 12;// first column
const int col2 = 8;// second column
boolean status = true;



void setup() {
  // put your setup code here, to run once:
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  digitalWrite(input1, HIGH);
  digitalWrite(input2, HIGH);
  Serial.begin(9600);
  


}

void loop() {

  int reading = digitalRead(input1);
  int reading2 = digitalRead(input2);

  //Put on column 1 on
  pinMode(col1, OUTPUT);
  pinMode(col2, INPUT);


  //Check row 1 and row 2

    //row 1
    if (reading == LOW) {
      Serial.println("Switch 1 is on, 0,0");
    }

    //row2
    if (reading2 == LOW) {
      Serial.println("switch2 is on 0,1");

    }
 
  //Put on column 2 on
  pinMode(col1, INPUT);
  pinMode(col2, OUTPUT);
  

 
    //row 1
    if (reading == LOW) {
      Serial.println("Switch 3 is on, 1,0");
    }

    //row2
    if (reading2 == LOW) {
      Serial.println("switch4 is on 1,1");

    }
  




}
///Serial.println(reading2);




