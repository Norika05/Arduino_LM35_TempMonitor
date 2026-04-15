/*
* Du an: Doc nhiet do LM35 va gui qua Serial
* Mon: Mang Cam Bien - Tuan 03
*/
int adcValues[2]; 
float nhietDo[2]; 
char chuoi[3];

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  adcValues = analogRead(A0);
  nhietDo = (adcValues * 500.0) / 1023.0;
  
  adcValues[4] = analogRead(A1);
  nhietDo[4] = (adcValues[4] * 500.0) / 1023.0;

  adcValues[5] = analogRead(A2);
  nhietDo[5] = (adcValues[5] * 500.0) / 1023.0;
  
  sprintf(chuoi, "%d,%d,%d\n", (int)nhietDo, (int)nhietDo[4], (int)nhietDo[5]);
  Serial.print(chuoi);
  delay(100);
}