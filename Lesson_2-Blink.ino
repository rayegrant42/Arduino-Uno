/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. led is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/


int led = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Morse Code for "Raymond".  The morse code was found on https://www.mobilefish.com/services/morse_code/morse_code.php.
  //The letter "R"
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);

//The letter "a"
digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

//The letter "y"
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

//The letter "m"
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

//The letter "o"
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

// The letter "n"
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);

//The letter "d"
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);

  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);

//Indicate restarting the loop
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);

  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);

  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);

}
