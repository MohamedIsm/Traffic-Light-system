// C++ code
//

int red=12;
  int yellow=11;
  int green=8;


int ON1=500;
int OF1=500;
int ON=1000;
int OF=1000;
void setup()
{
  pinMode(red, OUTPUT);
      pinMode(yellow, OUTPUT);
  
    pinMode(green, OUTPUT);
  
  
 
  digitalWrite(red, HIGH);
 
 delay(ON1);
  
  
  
    
  
 
  digitalWrite(yellow, HIGH);
  delay(ON1); 
  digitalWrite(yellow, LOW);
  delay(OF1);
  
   
  
 
  digitalWrite(yellow, HIGH);
  delay(ON1); 
  digitalWrite(yellow, LOW);
  delay(OF1);
  
  
  
 
  digitalWrite(yellow, HIGH);
  delay(ON1); 
  digitalWrite(yellow, LOW);
  
 digitalWrite(green, HIGH);
  
  
  digitalWrite(red,LOW);
  delay(OF1);
 
  
  digitalWrite(green, LOW);
  delay(OF);
}

void loop()
{  
}