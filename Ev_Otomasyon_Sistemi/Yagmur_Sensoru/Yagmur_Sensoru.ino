int esikDegeri = 100;              //Su miktarı için uyarı verilecek eşik değeri
int sensorPin = A0;                //Sensörü bağlayacağımız pin
int buzzerPin = 8;                 //Buzzerı bağlayacağımız pin
int veri;                          //Sensörden okuduğumuz değer

void setup() {
  pinMode(buzzerPin, OUTPUT);  //buzzeri çıkış pın tanımladık 
}
void loop() {
  veri = analogRead(sensorPin);    //Sensörden analog veriyi okuyoruz.
  if(veri > esikDegeri){           //Sensör verisi eşik değerini geçerse if içerisindeki kodlar uygulanır.
    digitalWrite(buzzerPin, HIGH); //ses çıkart
    delay(100);
    digitalWrite(buzzerPin, LOW); // sesi durdur
    delay(100);
  }
  else{                            //Sensör verisi eşik değerinden küçük olursa if içerisindeki kodlar uygulanır.
    digitalWrite(buzzerPin, LOW);
  }
}


