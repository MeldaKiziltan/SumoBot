//Final SumoBOT code
//Melda Kiziltan and Karalyn Gloor
//TEJ 3MI, Semester 2, 2018

//Establishing Variables for motor control
const int x = 500;

//Line detection
const int line = 9;

//Sonar
// defines pins numbers
const int trigPin = 13;
const int echoPin = 12;

// defines variables
long duration;
int distance;

void wait(){
  //Push button
  while (1 == 1) {
  digitalRead(10);
    if (digitalRead(10) == LOW){
      delay(5);
      if (digitalRead(10) == LOW){
        delay(5000);
        break;}
        }
    }
}

void setup() {
  // put your setup code here, to run once:
  //Motor 1
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    analogWrite (3, 140);
    pinMode(4, OUTPUT);
  //Motor 2
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    analogWrite (6, 140); 
    pinMode(7, OUTPUT);

  //Sonar setup
    pinMode(trigPin, OUTPUT);
    digitalWrite (trigPin, LOW);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);

  //line sensor
    pinMode(line, INPUT);
    
  // Push Button
    pinMode (10, INPUT);
    digitalWrite (10, HIGH);
    wait();
 
}

int sonar(){
//Sonar loop code
  
  // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
    distance= duration*0.034/2;

    Serial.print(distance);
    Serial.println();
    
    return distance;
}

void bck(){
  digitalWrite (2, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (5, LOW);
  digitalWrite (7, HIGH);
  }

  void fwd(){
  digitalWrite (2, HIGH);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  digitalWrite (7, LOW);
  }

  void hcw(){
  digitalWrite (2, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (7, LOW);
  }

  void hccw(){
  digitalWrite (2, HIGH);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (7, HIGH);
  }


void loop() {
  // put your main code here, to run repeatedly:
  
  if (digitalRead(line)== LOW){
    bck();
    delay(500);
    hcw();
    delay(350);
    }else if(sonar()<= 40){
      fwd();} 
      else{
        hcw();
        }
}
