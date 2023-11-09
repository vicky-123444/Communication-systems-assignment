int writePin=3;
int readPin=A2;
int delayTime=750;
float voltageReading;
int data[]={0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
void setup() {
  // put your setup code here, to run once:
pinMode(writePin,OUTPUT);
pinMode(readPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=0;i<sizeof(data)/sizeof(data[0]);i++){
  digitalWrite(writePin,data[i]);
  int v=analogRead(readPin);
  voltageReading=(5.0/1023)*v;
  Serial.println(voltageReading);
  delay(delayTime);
 }
}