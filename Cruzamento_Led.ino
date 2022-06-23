//Pista 1
int ledVermelho1 = 13;
int ledAmarelo1 = 12;
int LedVerde1 = 11;
int cor = 0;

int ledVermelho01 = 10;
int ledAmarelo01 = 9;
int LedVerde01 = 8;

//Pista 2
int ledVermelho2 = 7;
int LedAmarelo2 = 6;
int ledVerde2 = 5;

int ledVermelho02 = 4;
int LedAmarelo02 = 3;
int ledVerde02 = 2;

void setup()
{
  
 pinMode(ledVermelho1, OUTPUT);
 pinMode(ledAmarelo1, OUTPUT);
 pinMode(LedVerde1, OUTPUT);
  
 pinMode(ledVermelho01, OUTPUT);
 pinMode(ledAmarelo01, OUTPUT);
 pinMode(LedVerde01, OUTPUT);
  
 pinMode(ledVermelho2, OUTPUT);
 pinMode(LedAmarelo2, OUTPUT);
 pinMode(ledVerde2, OUTPUT);
  
 pinMode(ledVermelho02, OUTPUT);
 pinMode(LedAmarelo02, OUTPUT);
 pinMode(ledVerde02, OUTPUT);
}


void loop()
{
  
  
  cor++;
  if(cor==1)//Verde 1 / Vermelho 2
  {
    //Pista 1
  	digitalWrite(LedVerde1, HIGH);//Ligar led verde 1 - 01
    digitalWrite(LedVerde01, HIGH);//Ligar led verde 01 - 1
       
    //Pista 2
    digitalWrite(ledVermelho2, HIGH);//Ligar led verde 2 - 02
    digitalWrite(ledVermelho02, HIGH);//Ligar led verde 2 - 02
    delay(5000);
  }
  
  if(cor==2)//Amarelo 1 / Vermelho 2
  {
    //Pista 1
    digitalWrite(LedVerde1, LOW);//Desligar led verde 1 - 01
    digitalWrite(LedVerde01, LOW);//Desligar led verde 01 - 1
    
    digitalWrite(ledAmarelo1, HIGH);//Ligar led amarelo 1 - 01
    digitalWrite(ledAmarelo01, HIGH);//Ligar led amarelo 01 - 1
    delay(2000);
  }
  
  if(cor==3)//Vermelho 1 / Verde 2
  {
    //Pista 1
    digitalWrite(ledAmarelo1, LOW);//Desligar led amarelo 1 - 01
    digitalWrite(ledAmarelo01, LOW);//Desligar led amarelo 01 - 1
    digitalWrite(ledVermelho1, HIGH);//Ligar led vermelho 1 - 01
    digitalWrite(ledVermelho01, HIGH);//Ligar led vermelho 01 - 1
    
    //Pista 2
    digitalWrite(ledVermelho2, LOW);//Desligar led vermelho 2 - 02
    digitalWrite(ledVermelho02, LOW);//Desligar led vermelho 02 - 2
    digitalWrite(ledVerde2, HIGH);//Ligar led verde 2 - 02
    digitalWrite(ledVerde02, HIGH);//Ligar led verde 02 - 2
    delay(5000);
  }
  
  if(cor==4)//Vermelho 1 / Amarelo 2
  {
    //Pista 1
    digitalWrite(ledVerde2, LOW);//Desligar led verde 2 - 02
    digitalWrite(ledVerde02, LOW);//Desligar led verde 02 - 0
    digitalWrite(LedAmarelo2, HIGH);//Desligar led amarelo 2 - 02
    digitalWrite(LedAmarelo02, HIGH);//Desligar led amarelo 02 - 2
    delay(2000);
    
    //Pista 1
    digitalWrite(ledVermelho1, LOW);//Desligar led vermelho 1 - 01
    digitalWrite(ledVermelho01, LOW);//Desligar led vermelho 01 - 1
  
    //Pista 2
    digitalWrite(LedAmarelo2, LOW);//Desligar led amarelo 2 - 02
    digitalWrite(LedAmarelo02, LOW);//Desligar led amarelo 2 - 02
    
    cor = 0;
  }
 }