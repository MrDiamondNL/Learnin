
#define BLUE 3
#define GREEN 5
#define RED 6


void setup() {
  // put your setup code here, to run once:
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}
int redValue;
int greenValue;
int blueValue;

void loop() {
  // put your main code here, to run repeatedly:
  const int delayTime = 10;
  
  redValue = 255;
  greenValue = 0;
  blueValue = 0;

  // fades out red bring green full when i=255
  for(int i = 0; i < 255; i += 1) {
    redValue -= 1;
    greenValue += 1;

    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }  

  redValue = 0;
  greenValue = 255;
  blueValue = 0;
  // fades out green bring blue full when i=255
  for(int i = 0; i < 255; i += 1) {
    greenValue -= 1;
    blueValue += 1;

    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }

  redValue = 0;
  greenValue = 0;
  blueValue = 255;
  // fades out blue bring red full when i=255
  for(int i = 0; i < 255; i += 1) {
    blueValue -= 1;
    redValue += 1;

    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }
  
}
