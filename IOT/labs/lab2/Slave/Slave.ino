#include<Wire.h>
char arr[]={0};

void setup() {
  Serial.begin(9600);
  Wire.begin(10);
  Wire.onReceive(receiveEvent);
}
void receiveEvent(int howMany)
{
  if(Wire.available())
  {
   for(int i=0;i<howMany;i++)
    {
      char c=Wire.read();
      arr[i]=c;
    }
    Serial.println(arr);
  }
}
void loop() {
  delay(1000);
 
}
