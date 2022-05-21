int sensorPin = 9;                  //Sensörün takılacağı pin 
int buzzerPin = 8;                  //Buzzerın takılacağı pin
int veri;                           //Sensörden okunan verinin tutulacağı değişken

void setup() {
  pinMode(sensorPin, INPUT);        //Sensörün takılacağı pini INPUT 
  pinMode(buzzerPin, OUTPUT);       //Buzzerın takılacağı pini OUTPUT 

/*
Setup kısmında pinlerin tipini belli ediyorum. Sensör pini bize veri verecek ve buzzer ile ben geriye değer döndereceğim.
*/

}
void loop() {
  veri = digitalRead(sensorPin);    //Sensörden dijital okuma yapıyoruz.
  if(veri == true){           
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
// Aktif buzzerlar 5 V değer ile bu kodlama ile çalışır.
  }
  else{                             //Sensör verisi eşik değerinden küçük olursa if içerisindeki kodlar uygulanır.
    digitalWrite(buzzerPin, LOW);
  }
}


