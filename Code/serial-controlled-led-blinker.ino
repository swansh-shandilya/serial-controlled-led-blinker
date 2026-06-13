String choice;
int j;
int i;
int redled=13;
int greenled=12;
int blueled=8;
int dt=250;
String msg=" which led you want to turn on? :";
String msg2=" How many times do you want to blink the led?: ";
void setup()
{
  Serial.begin(9600);
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(blueled,OUTPUT);
}

void loop()
{
  Serial.println(msg);
  while (Serial.available()==0) {
   
  }  
  choice=Serial.readString();
  choice.trim();
  if (choice== "Blue" || choice== "blue") {
    Serial.println(msg2);
    while (Serial.available()==0) {
      
    }
    j=Serial.parseInt();
    for (i=1;i<=j;i=i+1){
      digitalWrite(blueled,HIGH);
      digitalWrite(redled,LOW);
      digitalWrite(greenled,LOW);
      delay(dt);
      digitalWrite(blueled,LOW);
      delay(dt);
    } 
  }
  if (choice== "Green" || choice== "green") {
    Serial.println(msg2);
    while (Serial.available()==0) {
      
    }
    j=Serial.parseInt();
    for (i=1;i<=j;i=i+1){
      digitalWrite(blueled,LOW);
      digitalWrite(redled,LOW);
      digitalWrite(greenled,HIGH);
      delay(dt);
      digitalWrite(greenled,LOW);
      delay(dt);
    } 
  }       
  if (choice== "Red" || choice== "red") {
    Serial.println(msg2);
    while (Serial.available()==0) {
      
    }
    j=Serial.parseInt();
    for (i=1;i<=j;i=i+1){
      digitalWrite(blueled,LOW);
      digitalWrite(redled,HIGH);
      digitalWrite(greenled,LOW);
      delay(dt);
      digitalWrite(redled,LOW);
      delay(dt);
    } 
  }
  delay(1000);
  digitalWrite(blueled,LOW);
  digitalWrite(redled,LOW);
  digitalWrite(greenled,LOW);       
  delay(dt);
  
}