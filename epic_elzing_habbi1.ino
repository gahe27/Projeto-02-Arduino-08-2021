const int pinRED = 4, pinYEL = 3, pinGRE = 2;
void setup()
{
  for(int p = 2; p <= 4; p++){
  pinMode(p, OUTPUT);
  }
}

void loop()
{
  for(int p = 2; p <= pinRED; p++){
  	digitalWrite(p, HIGH);
    if(p==pinGRE){
      digitalWrite(pinRED, LOW);
    }
    else{
    	digitalWrite(p-1, LOW);
    }
   	switch(p){
     	case pinGRE:
      		delay(2000);
      	break;
      	case pinYEL:
      		delay(1000);
      	break;
      	case pinRED:
      		delay(4000);
      	break;
    }
  }
}