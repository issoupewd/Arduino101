// traffic lights 6 leds
#define RC 2
#define YC 3
#define GC 4

#define RP 8
#define YP 9
#define GP 10
// P for people & C for cars   , R : red , Y : yellow  , G : green 

void setup() {
  // put your setup code here, to run once:
pinMode( RC , OUTPUT );
pinMode( YC , OUTPUT );
pinMode( GC , OUTPUT );
pinMode( RP , OUTPUT );
pinMode( YP , OUTPUT );
pinMode( GP , OUTPUT );
Serial.begin(9600);
digitalWrite( RC , LOW );
digitalWrite( YC , LOW );
digitalWrite( GC , LOW );
digitalWrite( RP , LOW );
digitalWrite( YP , LOW );
digitalWrite( GP , LOW );
}

void loop() {
  // put your main code here, to run repeatedly:
//cars stop & people go

digitalWrite( RC , HIGH );
digitalWrite( GP , HIGH );

prints();
delay(4000) ;
    Serial.println("  ");
  
// between changing 
digitalWrite( RC , LOW );
digitalWrite( GP , LOW );
  
digitalWrite( YC , HIGH );
digitalWrite( YP , HIGH );

prints();

delay(2000) ;
    Serial.println("  ");
  
// cars  go & people stop
digitalWrite( YC , LOW );
digitalWrite( YP , LOW );

digitalWrite( GC , HIGH );
digitalWrite( RP , HIGH );

prints();
delay(4000) ;
    Serial.println("  ");
  
 // between changing 
digitalWrite( GC , LOW );
digitalWrite( RP , LOW );

digitalWrite( YC , HIGH );
digitalWrite( YP , HIGH );

prints();
delay(2000) ;
  
digitalWrite( RC , LOW );
digitalWrite( YC , LOW );
digitalWrite( GC , LOW );
digitalWrite( RP , LOW );
digitalWrite( YP , LOW );
digitalWrite( GP , LOW );
  

  Serial.println("  ");
 }

 void prints(){
  if(digitalRead(RC) == LOW) {
    Serial.println("the Red led for cars : OFF, ");
  } else {
    Serial.println("the Red led for cars : ON, ");
  }

  if(digitalRead(YC) == LOW) {
    Serial.println("the yellow led for cars : OFF, ");
  } else {
    Serial.println("the yellow led for cars : ON, ");
  }

  if(digitalRead(GC) == LOW) {
    Serial.println("the Green  led for cars: OFF, ");
  } else {
    Serial.println("the Green  led for cars : ON, ");
  }

  if(digitalRead(RP) == LOW) {
    Serial.println("the Red led for ppl: OFF, ");
  } else {
    Serial.println("the Red led for ppl : ON, ");
  }

  if(digitalRead(YP) == LOW){
       Serial.println("the yellow led for ppl : OFF, ");
  } else {
    Serial.println("the yellow led for ppl : ON, ");
  }

  if(digitalRead(GP) == LOW) {
       Serial.println("the Green  led for ppl : OFF, ");
  } else {
    Serial.println("the Green led for ppl : ON, ");
  }
  }
