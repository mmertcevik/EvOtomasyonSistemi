
#define led 3  // pine isim verilir

void setup() {

    pinMode(led,OUTPUT);
    Serial.begin(9600);

}

void loop() {

  int isik = analogRead(A0);
// ortam ışığından okunan değer A0 portuna bağlı olan değer isik değişkenine atanır. 

  Serial.println(isik);
  delay(50);

 /* gelen veriler yazdırarak serial monitörde görülebilir hale geldi. Delay ile gelen verilen hızlıca akmaması için bekleme süresi verdim. Serial monitörde ortamın ışığına göre istediğiniz değeri ayarlabiliriz. */

  if(isik > 800){
    digitalWrite(led,LOW);
  }
// Işık şiddeti şiddeti 800 den büyük ise Led i yakma Yani aydınlık ortamdasın 


  if(isik < 700){
    digitalWrite(led,HIGH);
// Işık şiddeti şiddeti 750 den küçük ise Led i yak.Artık karanlık ortama girildi 

  }

}
