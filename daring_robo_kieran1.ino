byte leds[8]={2,3,4,5,6,7,8,9};
/*the code has 5 posies 
first s
second m
third a
fourth r
fifth t
*/
char j;
void setup()
{
  for( byte i=0;i<8;i++){     
  pinMode(leds[i], OUTPUT);
  }
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0){
  j=Serial.read();
  for( byte i=0;i<8;i++){
 digitalWrite(leds[i],j&1<<i); 
    }  
  }  
}