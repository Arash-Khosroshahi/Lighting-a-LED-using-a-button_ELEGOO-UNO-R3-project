//turn led on with a button  

void setup() {
  pinMode(4, OUTPUT);   //my led is connected to pin 4
  pinMode(2, INPUT);    // my button is connected to pin 2
}

void loop() {
  if(digitalRead(2)==HIGH){   // if my button is high:
    digitalWrite(4,HIGH);     // my led goes on 
  }
  else{                      // if the button isnt on:
     digitalWrite(4,LOW);    // my led goes dark 
  }

  }
