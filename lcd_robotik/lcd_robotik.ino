//dc motor tanımlama
#define  Enable_A  9
#define  Enable_B  10
#define  Enable_C  11
#define  Enable_D  12

#define  inputA1  16
#define  inputA2  17

#define  inputB1  23
#define  inputB2  25

#define  inputC1  27
#define  inputC2  29

#define  inputD1  31
#define  inputD2  33

void setup()
{//dc motor
pinMode(Enable_A, OUTPUT);
pinMode(Enable_B, OUTPUT);
pinMode(Enable_C, OUTPUT);
pinMode(Enable_D, OUTPUT);

pinMode(inputA1, OUTPUT);
pinMode(inputA2, OUTPUT);
pinMode(inputB1, OUTPUT);
pinMode(inputB2, OUTPUT);

pinMode(inputC1, OUTPUT);
pinMode(inputC2, OUTPUT);
pinMode(inputD1, OUTPUT);
pinMode(inputD2, OUTPUT);
analogWrite(Enable_A, 255);
analogWrite(Enable_B, 255);
analogWrite(Enable_C, 255);
analogWrite(Enable_D, 255);
 
}
 void loop()
{
 
//dc_ileri(1000);
//dc_dur();
//dc_geri(1000);

//dc_sag(1000);
//dc_dur();
//dc_sol(1000);
//dc_dur();

}
 



void dc_dur(){
  
  digitalWrite(inputA1, LOW);
  digitalWrite(inputA2, LOW);
  digitalWrite(inputB1 , LOW);
  digitalWrite(inputB2, LOW);

  digitalWrite(inputC1, LOW);
  digitalWrite(inputC2, LOW);
  digitalWrite(inputD1 , LOW);
  digitalWrite(inputD2, LOW);

  analogWrite(Enable_A, 0);
  analogWrite(Enable_B, 0);
  analogWrite(Enable_C, 0);
  analogWrite(Enable_D, 0);
  delay(3000);  

}

void dc_sol(int adim)
{
  digitalWrite(inputA1,LOW );
  digitalWrite(inputA2,HIGH );

  digitalWrite(inputB1 , HIGH);
  digitalWrite(inputB2, LOW);

  digitalWrite(inputC1,HIGH );
  digitalWrite(inputC2,LOW );

  digitalWrite(inputD1 ,HIGH );
  digitalWrite(inputD2, LOW);

  analogWrite(Enable_A, 255);
  analogWrite(Enable_B, 255);
  analogWrite(Enable_C, 255);
  analogWrite(Enable_D, 255);

  delay(adim);

}
void dc_sag(int adim)
{
  digitalWrite(inputA1,HIGH );
  digitalWrite(inputA2,LOW );

  digitalWrite(inputB1 ,LOW );
  digitalWrite(inputB2, HIGH);

  digitalWrite(inputC1,LOW );
  digitalWrite(inputC2, HIGH);

  digitalWrite(inputD1 ,LOW );
  digitalWrite(inputD2, HIGH);

  analogWrite(Enable_A, 255);
  analogWrite(Enable_B, 255);
  analogWrite(Enable_C, 255);
  analogWrite(Enable_D, 255);

  delay(adim);

}
void dc_ileri(int adim)
{
  digitalWrite(inputA1,HIGH );
  digitalWrite(inputA2,LOW );

  digitalWrite(inputB1 , LOW );
  digitalWrite(inputB2, HIGH);

  digitalWrite(inputC1,HIGH );
  digitalWrite(inputC2,LOW );

  digitalWrite(inputD1 ,HIGH );
  digitalWrite(inputD2, LOW);

  analogWrite(Enable_A, 255);
  analogWrite(Enable_B, 255);
  analogWrite(Enable_C, 255);
  analogWrite(Enable_D, 255);

  delay(adim);
 
}
void dc_geri(int adim)
{
   digitalWrite(inputA1, LOW);
  digitalWrite(inputA2, HIGH);

  digitalWrite(inputB1 , HIGH);
  digitalWrite(inputB2, LOW);

  digitalWrite(inputC1, LOW);
  digitalWrite(inputC2, HIGH);

  digitalWrite(inputD1 , LOW);
  digitalWrite(inputD2, HIGH);

  analogWrite(Enable_A, 255);
  analogWrite(Enable_B, 255);
  analogWrite(Enable_C, 255);
  analogWrite(Enable_D, 255);

}
