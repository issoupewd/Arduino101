// turns on leds with a button 
#define led 5 


#define BTN 11 // our button 


void setup() {
  // put your setup code here, to run once:
pinMode( led , OUTPUT );


// set everything to LOW
digitalWrite( led , LOW );

pinMode( BTN , INPUT ); // the button is an input 

}

void loop() {
  // put your main code here, to run repeatedly:


 
  if (digitalRead(BTN) == HIGH) { // digitalRead to read the pin values, HIGH OR LOW , we use if cond
   digitalWrite( led , HIGH );

  } else { // if it is not HIGH , it's LOW , button not pressed 
     digitalWrite( led , LOW );
  

    }
  
}
