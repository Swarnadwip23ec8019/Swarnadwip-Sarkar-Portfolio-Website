int soundPin = A0;
int LED1 = 0;
int LED2 = 1;
int LED3 = 2;
int LED4 = 3;
int LED5 = 4;
int LED6 = 5;
int LED7 = 6;
int LED8 = 7;
int LED9 = 8;
int LED10 = 9;
int LED11 = 10;
int LED12 = 11;
int LED13 = 12;
int LED14 = 13;

void setup()
{
Serial.begin(9600);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(LED6, OUTPUT);
pinMode(LED7, OUTPUT);
pinMode(LED8, OUTPUT);
pinMode(LED9, OUTPUT);
pinMode(LED10, OUTPUT);
pinMode(LED11, OUTPUT);
pinMode(LED12, OUTPUT);
pinMode(LED13, OUTPUT);
pinMode(LED14, OUTPUT);
}

void loop()
{
long sum = 0;
//instead of parenthesis () put angle bracket as YouTube description does not allow angle bracket
for(int i=0; i<100; i++) // taking 100 sample of sound
{
sum += analogRead(soundPin);
}

sum = sum/100; // average the sample of sound

if (sum>=50) digitalWrite(LED1, HIGH); else digitalWrite(LED1, LOW);
if (sum>=100) digitalWrite(LED2, HIGH); else digitalWrite(LED2, LOW);
if (sum>=150) digitalWrite(LED3, HIGH); else digitalWrite(LED3, LOW);
if (sum>=200) digitalWrite(LED4, HIGH); else digitalWrite(LED4, LOW);
if (sum>=250) digitalWrite(LED5, HIGH); else digitalWrite(LED5, LOW);
if (sum>=300) digitalWrite(LED6, HIGH); else digitalWrite(LED6, LOW);
if (sum>=350) digitalWrite(LED7, HIGH); else digitalWrite(LED7, LOW);
if (sum>=400) digitalWrite(LED8, HIGH); else digitalWrite(LED8, LOW);
if (sum>=450) digitalWrite(LED9, HIGH); else digitalWrite(LED9, LOW);
if (sum>=500) digitalWrite(LED10, HIGH); else digitalWrite(LED10, LOW);
if (sum>=510) digitalWrite(LED11, HIGH); else digitalWrite(LED11, LOW);
if (sum>=520) digitalWrite(LED12, HIGH); else digitalWrite(LED12, LOW);
if (sum>=530) digitalWrite(LED13, HIGH); else digitalWrite(LED13, LOW);
if (sum>=550) digitalWrite(LED14, HIGH); else digitalWrite(LED14, LOW);
delay(10); 
Serial.println(sum);
}