//C++ code
//
byte btn;

byte pins[7]={13,12,11,10,9,8,7};
byte show[16][7]={
  {0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 1, 1, 1, 1},
  {0, 0, 1, 0, 0, 1, 0},
  {0, 0, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0},
  {0, 1, 0, 0, 1, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0},
  {0, 0, 0, 1, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {0, 1, 1, 1, 0, 0, 0},
};
void setup()
{for (byte i = 0; i < 7; ++i) {
   pinMode(pins[i], OUTPUT); 
  }
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,INPUT_PULLUP);

}

void loop()
{	
  btn=digitalRead(3);
  if(btn==HIGH){    

  
  	digitalWrite(LED_BUILTIN,LOW);
  	digitalWrite(4,LOW);

  }else{    

  	digitalWrite(LED_BUILTIN,HIGH);

  	digitalWrite(4,HIGH);
    for(byte i = 0; i < 16; i++){
    for(byte j = 0; j < 7; j++){
      digitalWrite(pins[j], show[i][j]);
    }       delay(500);
    }
  }


    
 
}