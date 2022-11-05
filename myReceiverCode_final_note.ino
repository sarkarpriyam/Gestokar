#include<SPI.h>
#include<RF24.h>
#include<nRF24L01.h>

RF24 radio(D4,D2); // CE and CSN of esp8266
const byte address1[]="00001";
float recvmpudata[2];

int IN1=D0;
int IN2=D1;
int IN3=D3;
int IN4=D8;

int ena=D9;
int enb=D10;

void setup() {
  // put your setup code here, to run once:

Serial.begin(115200);

pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);

pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);


radio.begin();
radio.openReadingPipe(0,address1);// reading pipe range 0 to 5
radio.setPALevel(RF24_PA_MIN);
radio.startListening();

}

void loop() {
  // put your main code here, to run repeatedly:
if(radio.available()){
  radio.read(&recvmpudata,sizeof(recvmpudata));

//forward
if((recvmpudata[0] >= -10.00)&&(recvmpudata[0] <= -4.00)){
Serial.println("forward");
digitalWrite(ena,HIGH);
digitalWrite(enb,HIGH);

digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);

delay(20);
}

//backward
else if((recvmpudata[0] >= +4.00)&&(recvmpudata[0] <= +10.00)){
Serial.println("backward");
digitalWrite(ena,HIGH);
digitalWrite(enb,HIGH);

digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);

delay(20);
}

//left
else if((recvmpudata[1] >= -10.00)&&(recvmpudata[1] <= -4.00)){
Serial.println("left");
digitalWrite(ena,HIGH);
digitalWrite(enb,HIGH);

digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);

delay(20);
}

//right
else if((recvmpudata[1] >= +4.00)&&(recvmpudata[1] <= +10.00)){
Serial.println("right");
digitalWrite(ena,HIGH);
digitalWrite(enb,HIGH);

digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);

delay(20);
}

//stop
else if((recvmpudata[0] >= -5.00)&&(recvmpudata[0] <= +5.00)){
Serial.println("stop");
digitalWrite(ena,LOW);
digitalWrite(enb,LOW);

digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);

delay(20);
}
else{
  Serial.println("!!!!!!!!!!Wrong Input or Output!!!!!!!!!!");
}
}
}