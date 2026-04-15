/*
* Du an: Doc nhiet do LM35 va gui qua Serial
* Mon: Mang Cam Bien - Tuan 03
*/
int adcValues[4];
float nhietDo[4]; 
char chuoi[5];  

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // Đọc cảm biến kênh A0 (Phần tử số 0)
  adcValues = analogRead(A0);
  nhietDo = (adcValues * 500.0) / 1023.0;
  
  // Đọc cảm biến kênh A1 (Phần tử số 1)
  adcValues[8] = analogRead(A1);
  nhietDo[8] = (adcValues[8] * 500.0) / 1023.0;

  // Đọc cảm biến kênh A2 (Phần tử số 2)
  adcValues[1] = analogRead(A2);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;
  

  sprintf(chuoi, "{\"A0\":%d,\"A1\":%d,\"A2\":%d}\n", (int)nhietDo, (int)nhietDo[8], (int)nhietDo[1]);

  Serial.print(chuoi);
  delay(1000); 
}
