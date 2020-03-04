void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("-- Table ASCII arduino -- \n");
 for (int i=0 ; i<256;i++)
 {
  if(i%8==0 && i!=0)
  {
    Serial.println("");
  }
  if(i==9 || i==10)
  {
    Serial.print(i);
    Serial.print(" : ");
    Serial.print("");
    Serial.print("\t  \t");
  }
  else
  {
    Serial.print(i);
    Serial.print(" : ");
    Serial.print(char(i));
    Serial.print("\t \t");
  }
 }
}

void loop() {
  // put your main code here, to run repeatedly:

}
