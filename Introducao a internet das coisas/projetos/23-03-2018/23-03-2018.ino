/*funcao para carregar as definicoes*/
int MA = 7;
int MB = 8;
int MC = 2;
int MD = 3;
int ME = 4;
int MF = 5;
int MG = 6;
int button = 12;

int btnCurrentState = 0;
int btnPreviousState = 0;

int cont;
  
  
void fun0(int TIME){
    /*0*/
    digitalWrite(MA, HIGH);
    digitalWrite(MB, HIGH);
    digitalWrite(MC, HIGH);
    digitalWrite(MD, HIGH);
    digitalWrite(ME, HIGH);
    digitalWrite(MF, HIGH);
    digitalWrite(MG, LOW);
    delay(TIME);
}
void fun1(int TIME){
  /*1*/
  digitalWrite(MA, LOW);
  digitalWrite(MD, LOW);
  digitalWrite(ME, LOW);
  digitalWrite(MF, LOW);
  delay(TIME);
}
void fun2(int TIME){
  /*2*/
  digitalWrite(MA, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MC, LOW);
  digitalWrite(MD, HIGH);
  digitalWrite(ME, HIGH);
  digitalWrite(MF, LOW);
  digitalWrite(MG, HIGH);
  delay(TIME);
}
void fun3(int TIME){ 
  /*3*/
  digitalWrite(MA, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MC, HIGH);
  digitalWrite(MD, HIGH);
  digitalWrite(ME, LOW);
  digitalWrite(MF, LOW);
  digitalWrite(MG, HIGH);
  delay(TIME);
}
void fun4(int TIME){  
/*4*/
  digitalWrite(MA, LOW);
  digitalWrite(MB, HIGH);
  digitalWrite(MC, HIGH);
  digitalWrite(MD, LOW);
  digitalWrite(ME, LOW);
  digitalWrite(MF, HIGH);
  digitalWrite(MG, HIGH);
  delay(TIME);
}  
void fun5(int TIME){
  /*5*/
  digitalWrite(MA, HIGH);
  digitalWrite(MB, LOW);
  digitalWrite(MC, HIGH);
  digitalWrite(MD, HIGH);
  digitalWrite(ME, LOW);
  digitalWrite(MF, HIGH);
  digitalWrite(MG, HIGH);
  delay(TIME);
}
void fun6(int TIME){
  /*6*/
  digitalWrite(MA, HIGH);
  digitalWrite(MB, LOW);
  digitalWrite(MC, HIGH);
  digitalWrite(MD, HIGH);
  digitalWrite(ME, HIGH);
  digitalWrite(MF, HIGH);
  digitalWrite(MG, HIGH);
  delay(TIME);
}
void fun7(int TIME){
  /*7*/
  digitalWrite(MA, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MC, HIGH);
  digitalWrite(MD, LOW);
  digitalWrite(ME, LOW);
  digitalWrite(MF, LOW);
  digitalWrite(MG, LOW);
  delay(TIME);
}
void fun8(int TIME){
  /*8*/
  digitalWrite(MA, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MC, HIGH);
  digitalWrite(MD, HIGH);
  digitalWrite(ME, HIGH);
  digitalWrite(MF, HIGH);
  digitalWrite(MG, HIGH);
  delay(TIME);
}
void fun9(int TIME){ 
  /*9*/
  digitalWrite(MA, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MC, HIGH);
  digitalWrite(MD, LOW);
  digitalWrite(ME, LOW);
  digitalWrite(MF, HIGH);
  digitalWrite(MG, HIGH);
  delay(TIME);
}
/**********************************************************/

  
/*funcao de config*/ 
void setup(){
  pinMode(MA,OUTPUT);
  pinMode(MB,OUTPUT);
  pinMode(MC,OUTPUT);
  pinMode(MD,OUTPUT);
  pinMode(ME,OUTPUT);
  pinMode(MF,OUTPUT);
  pinMode(MG,OUTPUT);
  pinMode(button,INPUT);

  Serial.begin(9600);
}
/**********************************************************/
/*
void verifyButton(int cont) {
  btnPreviousState = btnCurrentState;
    btnCurrentState = digitalRead(button);
 
    if (btnPreviousState == LOW && btnCurrentState == HIGH) {
      onButtonDown(cont);
    } else if (btnPreviousState == HIGH && btnCurrentState == LOW) {
      onButtonUp();
  }
}
int onButtonDown(int cont) {
  return cont++;  
}
 
int onButtonUp() {
  
}
*/

/*funcao do looping~main~*/
void loop(){
  int TIME = 500;
  cont = random(0,9);
  returnN(cont,TIME); 
}

/**********************************************************/
/*funcao de cases */
void returnN(int cont,int time){
  switch(cont){
    case 0:fun0(time);break;
    case 1:fun1(time);break;
    case 2:fun2(time);break;
    case 3:fun3(time);break;
    case 4:fun4(time);break;
    case 5:fun5(time);break;
    case 6:fun6(time);break;
    case 7:fun7(time);break;
    case 8:fun8(time);break;
    case 9:fun9(time);break;
    
  }
}

