#pragma GCC push_options
#pragma GCC optimize ("O1")

int button = 2;
int motor = 8;

void setup()
{
pinMode(button, INPUT);
pinMode(motor, OUTPUT);
}

void loop()
{

if(digitalRead(button) == HIGH)
{
digitalWrite(motor, HIGH);
}
else
{
digitalWrite(motor, LOW);
}

}

#pragma GCC pop_options