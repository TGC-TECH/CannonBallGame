

// constants won't change. They're used here to set pin numbers:
const int one = A0;     // the number of the pushbutton pin
const int two = A1;
const int three = A2;
const int four = A3;
const int onepin1 =  13;      // the number of the LED pin
const int onepin2 =  12;      // the number of the LED pin
const int onepin3 =  11;      // the number of the LED pin
const int twopin1 =  10;      // the number of the LED pin
const int twopin2 = 9;
const int twopin3 = 8;
const int threepin1 = 7;
const int threepin2 = 6;
const int threepin3 = 5; 
const int error = 4;

// variables will change:
int oneState = 0;         // variable for reading the pushbutton status
int twoState = 0;
int threeState = 0;
int fourState = 0;
//veriable for how many LEDS are on 
int oneled = 0;
int twoled = 0;
int threeled = 0;
int fourled = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(onepin1, OUTPUT);
  pinMode(onepin2, OUTPUT);
  pinMode(onepin3, OUTPUT);
  pinMode(twopin1, OUTPUT);
  pinMode(twopin2, OUTPUT);
  pinMode(twopin3, OUTPUT);
  pinMode(threepin1, OUTPUT);
  pinMode(threepin2, OUTPUT);
  pinMode(threepin3, OUTPUT);
  pinMode(error, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(one, INPUT);
  pinMode(two, INPUT);
  pinMode(three, INPUT);
  pinMode(four, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  oneState = digitalRead(one);
  twoState = digitalRead(two);
  threeState = digitalRead(three);
  fourState = digitalRead(four);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (oneState == HIGH) {
    // turn LED on:
    if(oneled < 3) {oneled++; }
    delay(75); }

     if (twoState == HIGH) {
    // turn LED on:
    if(twoled < 3) {twoled++; }
    delay(75); }

    if (threeState == HIGH) {
    // turn LED on:
    if(threeled < 3) {threeled++; }
    delay(75); }

     if (fourState == HIGH) {
    // turn LED on:
    if(twoled < oneled && threeled < oneled && oneled > 0) {oneled--;digitalWrite(error, HIGH); delay(100);digitalWrite(error, LOW); }
    else if(threeled < twoled && oneled < twoled && twoled > 0) {twoled--; digitalWrite(error, HIGH); delay(100);digitalWrite(error, LOW);}
     else if(twoled < oneled && oneled < threeled && threeled > 0) {threeled--; digitalWrite(error, HIGH); delay(100);digitalWrite(error, LOW);}
     else { 
      for(int i = 0; i < 5; i++){
      digitalWrite(error, HIGH); delay(20);digitalWrite(error, LOW); }}
    
    delay(75); }
     if (oneled == 0) {
    digitalWrite(onepin1, LOW);
    digitalWrite(onepin2, LOW);
    digitalWrite(onepin3, LOW);  
  }

    if (oneled == 1) {
    digitalWrite(onepin1, HIGH);
    digitalWrite(onepin2, LOW);
    digitalWrite(onepin3, LOW);  
  }
   if (oneled == 2) {
    digitalWrite(onepin1, HIGH);
    digitalWrite(onepin2, HIGH);
    digitalWrite(onepin3, LOW);  
  }
   if (oneled == 3) {
    digitalWrite(onepin1, HIGH);
    digitalWrite(onepin2, HIGH);
    digitalWrite(onepin3, HIGH);  
  }

     if (twoled == 0) {
    digitalWrite(twopin1, LOW);
    digitalWrite(twopin2, LOW);
    digitalWrite(twopin3, LOW);  
  }

    if (twoled == 1) {
    digitalWrite(twopin1, HIGH);
    digitalWrite(twopin2, LOW);
    digitalWrite(twopin3, LOW);  
  }
   if (twoled == 2) {
    digitalWrite(twopin1, HIGH);
    digitalWrite(twopin2, HIGH);
    digitalWrite(twopin3, LOW);  
  }
   if (twoled == 3) {
    digitalWrite(twopin1, HIGH);
    digitalWrite(twopin2, HIGH);
    digitalWrite(twopin3, HIGH);  
  }

     if (threeled == 0) {
    digitalWrite(threepin1, LOW);
    digitalWrite(threepin2, LOW);
    digitalWrite(threepin3, LOW);  
  }

    if (threeled == 1) {
    digitalWrite(threepin1, HIGH);
    digitalWrite(threepin2, LOW);
    digitalWrite(threepin3, LOW);  
  }
   if (threeled == 2) {
    digitalWrite(threepin1, HIGH);
    digitalWrite(threepin2, HIGH);
    digitalWrite(threepin3, LOW);  
  }
   if (threeled == 3) {
    digitalWrite(threepin1, HIGH);
    digitalWrite(threepin2, HIGH);
    digitalWrite(threepin3, HIGH);  
  }

  

  
}
