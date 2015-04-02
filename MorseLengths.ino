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
void period(){
  srt();
  lng();
  srt();
  lng();
  srt();
  lng();
  pse();
}
void question(){
  srt();
  srt();
  lng();
  lng();
  srt();
  srt();
  pse();
}
void exclamation(){
  srt();
  srt();
  lng();
  lng();
  srt();
  pse();
}
void comma(){
  lng();
  lng();
  srt();
  srt();
  lng();
  lng();
  pse();
}
void slash(){
  lng();
  srt();
  srt();
  lng();
  srt();
  pse();
}
void colon(){
  lng();
  lng();
  lng();
  srt();
  srt();
  srt();
  pse();
}
void apostrophe(){
  srt();
  lng();
  lng();
  lng();
  lng();
  srt();
  pse();
}
void equal(){
  lng();
  srt();
  srt();
  srt();
  lng();
  pse();
}
void hypen(){
  lng();
  srt();
  srt();
  srt();
  srt();
  lng();
  pse();
}
void parentheses(){
  lng();
  srt();
  lng();
  lng();
  srt();
  lng();
  pse();
}
void plus(){
  srt();
  lng();
  srt();
  lng();
  srt();
  pse();
}
void times(){
  lng();
  srt();
  srt();
  lng();
  pse();
}
void at(){
  srt();
  lng();
  lng();
  srt();
  lng();
  srt();
  pse();
}
void zero(){
  lng();
  lng();
  lng();
  lng();
  lng();
  pse();
}
void one(){
  srt();
  lng();
  lng();
  lng();
  lng();
  pse();
}
void two(){
  srt();
  srt();
  lng();
  lng();
  lng();
  pse();
}
void three(){
  srt();
  srt();
  srt();
  lng();
  lng();
  pse();
}
void four(){
  srt();
  srt();
  srt();
  srt();
  lng();
  pse();
}
void five(){
  srt();
  srt();
  srt();
  srt();
  srt();
  pse();
}
void six(){
  lng();
  srt();
  srt();
  srt();
  srt();
  pse();
}
void seven(){
  lng();
  lng();
  srt();
  srt();
  srt();
  pse();
}
void eight(){
  lng();
  lng();
  lng();
  srt();
  srt();
  pse();
}
void nine(){
  lng();
  lng();
  lng();
  lng();
  srt();
  pse();
}
void toMorse(String text){
  if (text.equalsIgnoreCase("a")){
    a();
  }
  else if (text.equalsIgnoreCase("b")){
    b();
  }
  else if (text.equalsIgnoreCase("c")){
    c();
  }
  else if (text.equalsIgnoreCase("d")){
    d();
  }
  else if (text.equalsIgnoreCase("e")){
    e();
  }
  else if (text.equalsIgnoreCase("f")){
    f();
  }
  else if (text.equalsIgnoreCase("g")){
    g();
  }
  else if (text.equalsIgnoreCase("h")){
    h();
  }
  else if (text.equalsIgnoreCase("i")){
    i();
  }
  else if (text.equalsIgnoreCase("j")){
    j();
  }
  else if (text.equalsIgnoreCase("k")){
    k();
  }
  else if (text.equalsIgnoreCase("l")){
    l();
  }
  else if (text.equalsIgnoreCase("m")){
    m();
  }
  else if (text.equalsIgnoreCase("n")){
    n();
  }
  else if (text.equalsIgnoreCase("o")){
    o();
  }
  else if (text.equalsIgnoreCase("p")){
    p();
  }
  else if (text.equalsIgnoreCase("q")){
    q();
  }
  else if (text.equalsIgnoreCase("r")){
    r();
  }
  else if (text.equalsIgnoreCase("s")){
    s();
  }
  else if (text.equalsIgnoreCase("t")){
    t();
  }
  else if (text.equalsIgnoreCase("u")){
    u();
  }
  else if (text.equalsIgnoreCase("v")){
    v();
  }
  else if (text.equalsIgnoreCase("w")){
    w();
  }
  else if (text.equalsIgnoreCase("x")){
    x();
  }
  else if (text.equalsIgnoreCase("y")){
    y();
  }
  else if (text.equalsIgnoreCase("z")){
    z();
  }
  else if (text.equalsIgnoreCase(" ")){
    space();
  }
  else if (text.equalsIgnoreCase(".")){
    period();
  }
  else if (text.equalsIgnoreCase("!")){
    exclamation();
  }
  else if (text.equalsIgnoreCase("?")){
    question();
  }
  else if (text.equalsIgnoreCase(",")){
    comma();
  }
  else if (text.equalsIgnoreCase("/")){
    slash();
  }
  else if (text.equalsIgnoreCase(":")){
    colon();
  }
  else if (text.equalsIgnoreCase("'")){
    apostrophe();
  }
  else if (text.equalsIgnoreCase("=")){
    equal();
  }
  else if (text.equalsIgnoreCase("-")){
    hypen();
  }
  else if (text.equalsIgnoreCase("(")){
    parentheses();
  }
  else if (text.equalsIgnoreCase(")")){
    parentheses();
  }
  else if (text.equalsIgnoreCase("[")){
    parentheses();
  }
  else if (text.equalsIgnoreCase("]")){
    parentheses();
  }
  else if (text.equalsIgnoreCase("+")){
    plus();
  }
  else if (text.equalsIgnoreCase("*")){
    times();
  }
  else if (text.equalsIgnoreCase("1")){
    one();
  }
  else if (text.equalsIgnoreCase("2")){
    two();
  }
  else if (text.equalsIgnoreCase("3")){
    three();
  }
  else if (text.equalsIgnoreCase("4")){
    four();
  }
  else if (text.equalsIgnoreCase("5")){
    five();
  }
  else if (text.equalsIgnoreCase("6")){
    six();
  }
  else if (text.equalsIgnoreCase("7")){
    seven();
  }
  else if (text.equalsIgnoreCase("8")){
    eight();
  }
  else if (text.equalsIgnoreCase("9")){
    nine();
  }
}
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop() {
String letters[] = (String)Serial.read();
for (int s = 0; s < letters.length(); s++){
toMorse((letters[s]));
}
}
