// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;

// defines variables
long duration;
int distance;
int safetyDistance;

void setup() {
  // put your setup code here, to run once:
pinMode (trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode (echoPin, INPUT); // sets the echoPin as an input
pinMode (buzzer, OUTPUT);
pinMode (ledPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on High state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// calculating the distance
distance= duration*0.034/2;

safetyDistance = distance;
if (safetyDistance <= 15) 
}
