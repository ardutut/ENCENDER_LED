// le damos nombre al pin 2 como LED

const int LED = 2;


void setup() {

// El pin LED (el 2) será de salida

 pinMode(LED, OUTPUT);
}

void loop() {

// Quiero que se encieda 
  
  digitalWrite (LED, HIGH);
}
