// turns on leds with a button 
#define R1 2 // red led1
#define Y1 3 // yellow led1
#define G1 4 // green led1

#define R2 8  // red led2
#define Y2 9  // yellow led2
#define G2 10 // green led2

#define BTN 11 // our button 


void setup() {
  // put your setup code here, to run once:
pinMode( R1 , OUTPUT );
pinMode( Y1 , OUTPUT );
pinMode( G1 , OUTPUT );
pinMode( R2 , OUTPUT );
pinMode( Y2 , OUTPUT );
pinMode( G2 , OUTPUT );

Serial.begin(9600); // for communication 

// set everything to LOW
digitalWrite( R1 , LOW );
digitalWrite( Y1 , LOW );
digitalWrite( G1 , LOW );
digitalWrite( R2 , LOW );
digitalWrite( Y2 , LOW );
digitalWrite( G2 , LOW );

pinMode( BTN , INPUT ); // the button is an input 

}

void loop() {
  // put your main code here, to run repeatedly:


 
  if (digitalRead(BTN) == HIGH) { // digitalRead to read the pin values, HIGH OR LOW , we use if cond
   digitalWrite( R1 , HIGH );
   digitalWrite( Y1 ,  HIGH );
   digitalWrite( G1 ,  HIGH );
   digitalWrite( R2 ,  HIGH );
   digitalWrite( Y2 , HIGH );
   digitalWrite( G2 ,  HIGH );
  } else { // if it is not HIGH , it's LOW , button not pressed 
     digitalWrite( R1 , LOW );
     digitalWrite( Y1 , LOW );
     digitalWrite( G1 , LOW );
     digitalWrite( R2 , LOW ); 
     digitalWrite( Y2 , LOW );
     digitalWrite( G2 , LOW );

    }
  
}
