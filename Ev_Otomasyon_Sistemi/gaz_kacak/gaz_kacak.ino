int esikDegeri = 400;               //Gaz eşik değerini belirliyoruz.    
int buzzerPin = 9;                  //Buzzerın takılacağı pin
int deger;                          //Sensörden okunan değer

void setup() {
  pinMode(buzzerPin, OUTPUT);       
}

void loop() {
  deger = analogRead(A0);           //Sensörden analog değer okuyoruz.
  if(deger > esikDegeri){           //Sensörden okunan değer eşik değerinden büyükse çalışır.
    digitalWrite(buzzerPin, HIGH); //buzzer i aktif et
    delay(100);
    digitalWrite(buzzerPin, LOW); //buzzer i pasif et
    delay(100);
  }
  else{                            
    digitalWrite(buzzerPin, LOW);
  }
}


