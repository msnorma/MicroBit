
const int col3 = 4;
const int LED = 26; //row 1 of the Matrix

void setup(){
 Serial.begin(9600);
 Serial.print("Starting to Blink");

 pinMode(col3, OUTPUT);
 pinMode(LED, OUTPUT); 
}

void loop(){
 digitalWrite(LED, HIGH);
 delay(1000);
 digitalWrite(LED, LOW);
 delay(1000);
}
