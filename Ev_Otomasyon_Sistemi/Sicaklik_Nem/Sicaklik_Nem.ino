#include <FaBoLCD_PCF8574.h> // LCD ekran kütüphanesi kütüphanesi
#include <Wire.h> // Arduino da I2C kullandığımız için dahil ediyoruz kütüphanesi
#include <DHT.h>  // DHT11 Nem ve Sıcaklık Sensörü kütüphanesi

#define DHTPIN 2 // Pini 2 olduğu belli ediyorum
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

FaBoLCD_PCF8574 lcd;


void setup() {

  lcd.begin(16,2); // LCD modelini tanıtıyorum
  lcd.print("Mert ÇEVİK"); // LCD e test amaçlı yazı yazdırıyorum
  delay(1000); // LCD e test amaçlı yazılan yazının kalma süresi
  dht.begin(); // Sensörü çalışmaya başlatıyorum


}

void loop() {

  int temp = dht.readTemperature(); // Sıcaklık değerini değişkene atadım
  int hum = dht.readHumidity(); // Nem değerini değişkene atadım


  lcd.clear();

  lcd.setCursor(0,0); // Lcd ekranın Sıcaklığın yazacağı konumu
  lcd.print("Sicaklik: "); // Sıcaklık değerini yazdım
  lcd.print(temp);
  lcd.print(" C");


 lcd.setCursor(0,1); // Lcd ekranın Nemin yazacağı konumu
  lcd.print("Nem: %"); // Nem değerini yazdım
  lcd.print(hum);

  delay(2000); // Lcd ekranın yazının kalma süresi 2 saniyede bir değer değişir.


 

 

}
