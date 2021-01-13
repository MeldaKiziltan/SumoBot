const int x = 1000;
const int y = 128;

void setup()
{
//Motor 1
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);

//Motor 2
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
}


void loop()
{

//Forwards
//Motor 1
analogWrite (3, y);
digitalWrite (2, HIGH);
digitalWrite (4, LOW);
//Motor 2
analogWrite (6, y);
digitalWrite (5, HIGH);
digitalWrite (7, LOW);

delay (x);

//Backwards
//Motor 1
analogWrite (3, y);
digitalWrite (2, LOW);
digitalWrite (4, HIGH);
//Motor 2
analogWrite (6, y);
digitalWrite (5, LOW);
digitalWrite (7, HIGH);

delay (x);

//Soft left turn
//Motor 1
analogWrite (3, y);
digitalWrite (2, HIGH);
digitalWrite (4, LOW);
//Motor 2
analogWrite (6, 0);
digitalWrite (5, LOW);
digitalWrite (7, LOW);

delay (x);

//Soft right turn
//Motor 1
analogWrite (3, 0);
digitalWrite (2, LOW);
digitalWrite (4, LOW);
//Motor 2
analogWrite (6, y);
digitalWrite (5, HIGH);
digitalWrite (7, LOW);

delay (x);

//Hard left turn
//Motor 1
analogWrite (3, y);
digitalWrite (2, HIGH);
digitalWrite (4, LOW);
//Motor 2
analogWrite (6, y);
digitalWrite (5, LOW);
digitalWrite (7, HIGH);

delay (x);

//Hard right turn
//Motor 1
analogWrite (3, y);
digitalWrite (2, LOW);
digitalWrite (4, HIGH);
//Motor 2
analogWrite (6, y);
digitalWrite (5, HIGH);
digitalWrite (7, LOW);

delay (x);
}
