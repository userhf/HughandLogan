void srt(){
digitalWrite(13, HIGH);
  delay(100);  
  digitalWrite(13, LOW);
  delay(100);
}
void lng(){
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(100);
}
void pse(){
  delay(300);
}
void space(){
  delay(700);
}
void a(){
  srt();
  lng();
  pse();
}
void b(){
  lng();
  srt();
  srt();
  srt();
  pse();
}
void c(){
 lng();
 srt();
 lng();
 srt();
 pse();
}
void d(){
 lng();
 srt();
 srt();
 pse();
}
void e(){
  srt();
  pse();
}
void f(){
  srt();
  srt();
  lng();
  srt();
  pse();
}
void g(){
  lng();
  lng();
  srt();
}
void h(){
  srt();
  srt();
  srt();
  srt();
  pse();
}
void i(){
  srt();
  srt();
  pse();
}
void j(){
  srt();
  lng();
  lng();
  lng();
  pse();
}
void k(){
  lng();
  srt();
  lng();
  pse();
}
void l(){
  srt();
  lng();
  srt();
  srt();
  pse();
}
void m(){
  lng();
  lng();
  pse();
}
void n(){
  lng();
  srt();
  pse();
}
void o(){
  lng();
  lng();
  lng();
  pse();
}
void p(){
  srt();
  lng();
  lng();
  srt();
  pse();
}
void q(){
  srt();
  lng();
  lng();
  pse();
}
void r(){
  srt();
  lng();
  srt();
  pse();
}
void s(){
  srt();
  srt();
  srt();
  pse();
}
void t(){
  lng();
  pse();
}
void u(){
  srt();
  srt();
  lng();
  pse();
}
void v(){
  srt();
  srt();
  srt();
  lng();
  pse();
}
void w(){
  srt();
  lng();
  lng();
  pse();
}
void x(){
  lng();
  srt();
  srt();
  lng();
  pse();
}
void y(){
  lng();
  srt();
  lng();
  lng();
  pse();
}
void z(){
  lng();
  lng();
  srt();
  srt();
  pse();
}
void setup() {
  pinMode(13, OUTPUT);
}
void loop() {
String letters = (String)Serial.read();
for (int s = 0; s < letters.length(); s++){
  Serial.println("Hello");
  Serial.println(letters[s]);
//to Morse((letters[s]));
}
}
