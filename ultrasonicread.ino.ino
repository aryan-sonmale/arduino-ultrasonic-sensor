void setup(){pinMode(10,OUTPUT);
pinMode(11,INPUT);
Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {digitalWrite(10,LOW);
delayMicroseconds(2);
digitalWrite(10,HIGH);
delayMicroseconds(10);  // put your main code here, to run repeatedly:
digitalWrite(10,LOW);
unsigned long duration=pulseIn(11,HIGH,30000UL);
if (duration==0){Serial.println("no eccho recieved");}
else{float distance=(0.0343*duration)/2;
  Serial.println(distance);}
delay(500);
}
