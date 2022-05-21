

#define SensorPin 3
#define MotorPin 5 
int MotorDurum = LOW; // Motorun çalışma durumu 

void setup() {
 
  pinMode(SensorPin, INPUT);
  pinMode(MotorPin, OUTPUT); //Çıkış Arduino dan motora veri çıkışı
}

void loop() {
  

  if( digitalRead(SensorPin) ){ // Sensörden gelen değer 1 olursa yani varsa

    if(MotorDurum == LOW){ //Motor kapalı ise

      MotorDurum = HIGH //Motoru aç
    }
    else{

      MotorDurum = LOW;
    }

    digitalWrite(MotorPin, MotorDurum); // Motordurumun Motora iletiyoruz.

  }
  delay(10);
  

}
