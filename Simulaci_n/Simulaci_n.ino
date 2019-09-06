int val;
void setup() {
 
pinMode(5,1); // los puertos digitales
Serial.begin(9600);
}

void loop() {
  
if(Serial.available()>0)
{
  val=Serial.read();
digitalWrite(5,val); //puerto donde encedera y apagara la led
}
}
