#include <Servo.h>
#include <DS3231.h>

DS3231  rtc(SDA, SCL);

Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5; 
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9; 
Servo servo10;
Servo servo11;
Servo servo12;
Servo servo13; 
Servo servo14;
Servo servo15;
Servo servo16;
Servo servo17;
Servo servo18;
Servo servo19; 
Servo servo20;
Servo servo21;
Servo servo22;
Servo servo23; 
Servo servo24;
Servo servo25;
Servo servo26;
Servo servo27; 
Servo servo28;

int i = 0;

uint8_t hour10[6] = {1,2,3,4,5,6};
uint8_t hour11[2] = {1,2};

uint8_t hour20[6] = {8,9,10,11,12,13};
uint8_t hour21[2] = {8,9};
uint8_t hour22[5] = {10,9,14,12,13};
uint8_t hour23[5] = {10,9,14,8,13};
uint8_t hour24[4] = {12,23,10,9};
uint8_t hour25[5] = {10,11,14,8,13};
uint8_t hour26[5] = {11,12,13,8,14};
uint8_t hour27[3] = {10,9,8};
uint8_t hour28[7] = {8,9,10,11,12,13,14};
uint8_t hour29[5] = {8,9,10,11,14};

uint8_t minute10[4] = {24,25,26,27};

void setup() {
  // put your setup code here, to run once:
  //rtc.setDOW(SATURDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(9, 4, 0);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(10, 21, 2021);   // Set the date to January 1st, 2014
  
  //Serial.begin(9600);
  //Serial.print("test1");
  rtc.begin();

//  Serial.print(rtc.getTimeStr());
 // Serial.println(" test");
//  Serial.print("hour" + time.charAt(0));
//  Serial.print("hourtwo" + time.charAt(1));
//  Serial.print("minute" + time.charAt(3));
//  Serial.print("minutetwo" +time.charAt(4));
  
  servo1.attach(2);
  servo2.attach(3); 
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(8);
  servo8.attach(9);
  servo9.attach(10);
  servo10.attach(11); 
  servo11.attach(12);
  servo12.attach(13);
  servo13.attach(22);
  servo14.attach(23);
  servo15.attach(24);
  servo16.attach(25);
  servo17.attach(26);
  servo18.attach(27); 
  servo19.attach(28);
  servo20.attach(29);
  servo21.attach(30);
  servo22.attach(31);
  servo23.attach(32);
  servo24.attach(33);
  servo25.attach(34);
  servo26.attach(35);
  servo27.attach(36);
  servo28.attach(37);

  
  for (i = 90; i < 180; i++) { 
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    servo5.write(i);
    servo6.write(i);
    servo7.write(i);
    servo8.write(i);
    servo9.write(i);
    servo10.write(i);
    servo11.write(i);
    servo12.write(i);
    servo13.write(i);
    servo14.write(i);
    servo15.write(i);
    servo16.write(i);
    servo17.write(i);
    servo18.write(i);
    servo19.write(i);
    servo20.write(i);
    servo21.write(i);
    servo22.write(i);
    servo23.write(i);
    servo24.write(i);
    servo25.write(i);
    servo26.write(i);
    servo27.write(i);
    servo28.write(i);         
    delay(20);                      
  }

  //for (i = 180; i > 80; i--) { 
    //servo1.write(i);
    //servo2.write(i);
    //servo3.write(i);
    //servo4.write(i);
    //servo5.write(i);
    //servo6.write(i);
    //servo7.write(i);
    //servo8.write(i);
    //servo9.write(i);
    //servo10.write(i);
    //servo11.write(i);
    //servo12.write(i);
    //servo13.write(i);
    //servo14.write(i);         
    //delay(20);                      
  //}
  //hour10up();
  //hour28up();
  //hour10down();

}
int hour1 = 0; //Change these to the current time
int hour2 = 2;
int hour3 = 5;
  int hour4 = 4;
  
void loop() {

  //String time = String(rtc.getTimeStr());

//  char hour1 = time.charAt(0);
//  char hour2 = time.charAt(1);
//  char hour3 = time.charAt(3);
//  char hour4 = time.charAt(4);

  Serial.print("test");

  if(hour1 == 0){
    hour10up();
  }
  if(hour1 == 1){
    hour11up();
  }

  if(hour2 == 0){
    hour20up();
  }
  if(hour2 == 1){
    hour21up();
  }
  if(hour2 == 2){
    hour22up();
  }
  if(hour2 == 3){
    hour23up();
  }
  if(hour2 == 4){
    hour24up();
  }
  if(hour2 == 5){
    hour25up();
  }
  if(hour2 == 6){
    hour26up();
  }
  if(hour2 == 7){
    hour27up();
  }
  if(hour2 == 8){
    hour28up();
  }
  if(hour2 == 9){
    hour29up();
  }

  if(hour3 == 0){
    hour30up();
 }
  if(hour3 == 1){
    hour31up();
  }
  if(hour3 == 2){
    hour32up();
  }
  if(hour3 == 3){
    hour33up();
  }
  if(hour3 == 4){
    hour34up();
  }
  if(hour3 == 5){
    hour35up();
  }
  if(hour3 == 6){
    hour36up();
  }
  if(hour3 == 7){
    hour37up();
  }
//  if(hour3 = 8){
//    hour38up();
//  }
  if(hour3 == 9){
    hour39up();
  }
  if(hour4 == 0){
    hour40up();
  }
  if(hour3 == 1){
    hour41up();
  }
  if(hour4 == 2){
    hour42up();
  }
  if(hour4 == 3){
    hour43up();
  }
  if(hour4 == 4){
    hour44up();
  }
  if(hour4 == 5){
    hour45up();
  }
  if(hour4 == 6){
    hour46up();
  }
  if(hour4 == 7){
    hour47up();
  }
//  if(hour4 = 8){
//    hour48up();
//  }
  if(hour4 == 9){
    hour49up();
  }

  delay(60000);

  if(hour1 == 0){
    hour10down();
  }
  if(hour1 == 1){
    hour11down();
  }

  if(hour2 == 0){
    hour20down();
  }
  if(hour2 == 1){
    hour21down();
  }
  if(hour2 == 2){
    hour22down();
  }
  if(hour2 == 3){
    hour23down();
  }
  if(hour2 == 4){
    hour24down();
  }
  if(hour2 == 5){
    hour25down();
  }
  if(hour2 == 6){
    hour26down();
  }
  if(hour2 == 7){
    hour27down();
  }
  if(hour2 == 8){
    hour28down();
  }
  if(hour2 == 9){
    hour29down();
  }

  if(hour3 == 0){
    hour30down();
  }
  if(hour3 == 1){
    hour31down();
  }
  if(hour3 == 2){
    hour32down();
  }
  if(hour3 == 3){
    hour33down();
  }
  if(hour3 == 4){
    hour34down();
  }
  if(hour3 == 5){
    hour35down();
  }
  if(hour3 == 6){
    hour36down();
  }
  if(hour3 == 7){
    hour37down();
  }
//  if(hour3 = 8){
//    hour38down();
//  }
  if(hour3 == 9){
    hour39down();
  }

  if(hour4 == 0){
    hour40down();
  }
  if(hour3 == 1){
    hour41down();
  }
  if(hour4 == 2){
    hour42down();
  }
  if(hour4 == 3){
    hour43down();
  }
  if(hour4 == 4){
    hour44down();
  }
  if(hour4 == 5){
    hour45down();
  }
  if(hour4 == 6){
    hour46down();
  }
  if(hour4 == 7){
    hour47down();
  }
//  if(hour4 = 8){
//    hour48down();
//  }
  if(hour4 == 9){
    hour49down();
  }

  hour4++;
  if (hour4 == 10){
    hour4 = 0;
    hour3++;
    if(hour3 == 7){
      hour3 = 0;
      hour2++;
      if(hour2 == 10){
        hour2 = 1;
        hour1++;
        if(hour1 == 3){
          hour1 = 0;
          hour2 = 1;
        }
      }
    }
  }
  

  

  
  
  //for (i = 180; i > 0; i--) { 
    //servo25.write(i);         
    //delay(10);                      
  //}
  // put your main code here, to run repeatedly:
  //Serial.print("test2");
//  String time = String(rtc.getTimeStr());
//  Serial.print(rtc.getTimeStr());
//  Serial.println(" test");
//  Serial.print("hour" + time.charAt(0));
//  Serial.print("hourtwo" + time.charAt(1));
//  Serial.print("minute" + time.charAt(3));
//  Serial.print("minutetwo" +time.charAt(4));
  //delay(500);
}

void hour10up () {
  for (i = 180; i > 80; i--) {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    servo5.write(i);
    servo6.write(i);     
    delay(20);                      
  }
}
void hour10down () {
   for (i = 90; i < 180; i++) { 
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    servo5.write(i);
    servo6.write(i);         
    delay(20);                      
  }
}
void hour11up () {
  for (i = 180; i > 80; i--) {
    servo1.write(i);
    servo2.write(i);     
    delay(20);                      
  }
}
void hour11down () {
   for (i = 90; i < 180; i++) { 
    servo1.write(i);
    servo2.write(i);        
    delay(20);                      
  }
}


void hour20up (){
  for (i = 180; i > 80; i--) {
    servo8.write(i);
    servo9.write(i);
    servo10.write(i);
    servo11.write(i);
    servo12.write(i);
    servo13.write(i);     
    delay(20);                      
  }
}
void hour20down () {
  for (i = 90; i < 180; i++) { 
    servo8.write(i);
    servo9.write(i);
    servo10.write(i);
    servo11.write(i);
    servo12.write(i);
    servo13.write(i);        
    delay(20);                      
  }
}
void hour21up () {
 for (i = 180; i > 80; i--) {
    servo8.write(i);
    servo9.write(i);     
    delay(20);                      
  }
}
void hour21down () {
  for (i = 90; i < 180; i++) { 
    servo8.write(i);
    servo9.write(i);        
    delay(20);                      
  }
}
void hour22up () {
 for (i = 180; i > 80; i--) {
    servo10.write(i);
    servo9.write(i);
    servo14.write(i);
    servo12.write(i);
    servo13.write(i);    
    delay(20);                      
  }
}
void hour22down () {
  for (i = 90; i < 180; i++) { 
    servo10.write(i);
    servo9.write(i);
    servo14.write(i);
    servo12.write(i);
    servo13.write(i);        
    delay(20);                      
  }
}
void hour23up () {
 for (i = 180; i > 80; i--) {
    servo10.write(i);
    servo9.write(i);
    servo14.write(i);
    servo8.write(i);
    servo13.write(i);    
    delay(20);                      
  }
}
void hour23down () {
  for (i = 90; i < 180; i++) { 
    servo10.write(i);
    servo9.write(i);
    servo14.write(i);
    servo8.write(i);
    servo13.write(i);        
    delay(20);                      
  }
}
void hour24up () {
 for (i = 180; i > 80; i--) {
    servo11.write(i);
    servo9.write(i);
    servo14.write(i);
    servo8.write(i);    
    delay(20);                      
  }
}
void hour24down () {
  for (i = 90; i < 180; i++) { 
    servo11.write(i);
    servo9.write(i);
    servo14.write(i);
    servo8.write(i);        
    delay(20);                      
  }
}
void hour25up () {
 for (i = 180; i > 80; i--) {
    servo11.write(i);
    servo10.write(i);
    servo14.write(i);
    servo8.write(i); 
    servo13.write(i);   
    delay(20);                      
  }
}
void hour25down () {
  for (i = 90; i < 180; i++) { 
    servo11.write(i);
    servo10.write(i);
    servo14.write(i);
    servo8.write(i); 
    servo13.write(i);        
    delay(20);                      
  }
}
void hour26up () {
 for (i = 180; i > 80; i--) {
    servo11.write(i);
    servo12.write(i);
    servo14.write(i);
    servo8.write(i); 
    servo13.write(i);   
    delay(20);                      
  }
}
void hour26down () {
  for (i = 90; i < 180; i++) { 
    servo11.write(i);
    servo12.write(i);
    servo14.write(i);
    servo8.write(i); 
    servo13.write(i);        
    delay(20);                      
  }
}
void hour27up () {
 for (i = 180; i > 80; i--) {
    servo10.write(i);
    servo8.write(i); 
    servo9.write(i);   
    delay(20);                      
  }
}
void hour27down () {
  for (i = 90; i < 180; i++) { 
    servo10.write(i);
    servo8.write(i); 
    servo9.write(i);        
    delay(20);                      
  }
}
void hour28up () {
 for (i = 180; i > 80; i--) {
    servo8.write(i);
    servo9.write(i); 
    servo10.write(i);
    servo11.write(i);
    servo12.write(i); 
    servo13.write(i);
    servo14.write(i);   
    delay(20);                      
  }
}
void hour28down () {
  for (i = 90; i < 180; i++) { 
    servo8.write(i);
    servo9.write(i); 
    servo10.write(i);
    servo11.write(i);
    servo12.write(i); 
    servo13.write(i);
    servo14.write(i);        
    delay(20);                      
  }
}
void hour29up () {
 for (i = 180; i > 80; i--) {
    servo8.write(i);
    servo9.write(i); 
    servo10.write(i);
    servo11.write(i); 
    servo13.write(i);
    servo14.write(i);   
    delay(20);                      
  }
}
void hour29down () {
  for (i = 90; i < 180; i++) { 
    servo8.write(i);
    servo9.write(i); 
    servo10.write(i);
    servo11.write(i); 
    servo13.write(i);
    servo14.write(i);        
    delay(20);                      
  }
}


void hour30up () {
  for (i = 180; i > 80; i--) {
    servo15.write(i);
    servo16.write(i); 
    servo17.write(i);
    servo18.write(i); 
    servo19.write(i);
    servo20.write(i);   
    delay(20);                      
  }
}
void hour30down () {
  for (i = 90; i < 180; i++) { 
    servo15.write(i);
    servo16.write(i); 
    servo17.write(i);
    servo18.write(i); 
    servo19.write(i);
    servo20.write(i);          
    delay(20);                      
  }
}
void hour31up () {
  for (i = 180; i > 80; i--) {
    servo15.write(i);
    servo16.write(i);   
    delay(20);                      
  }
}
void hour31down () {
  for (i = 90; i < 180; i++) { 
    servo15.write(i);
    servo16.write(i);         
    delay(20);                      
  }
}
void hour32up () {
  for (i = 180; i > 80; i--) {
    servo21.write(i);
    servo16.write(i); 
    servo17.write(i); 
    servo19.write(i);
    servo20.write(i);   
    delay(20);                      
  }
}
void hour32down () {
  for (i = 90; i < 180; i++) { 
    servo21.write(i);
    servo16.write(i); 
    servo17.write(i); 
    servo19.write(i);
    servo20.write(i);         
    delay(20);                      
  }
}
void hour33up () {
  for (i = 180; i > 80; i--) {
    servo21.write(i);
    servo16.write(i); 
    servo17.write(i); 
    servo15.write(i);
    servo20.write(i);   
    delay(20);                      
  }
}
void hour33down () {
  for (i = 90; i < 180; i++) { 
    servo21.write(i);
    servo16.write(i); 
    servo17.write(i); 
    servo15.write(i);
    servo20.write(i);         
    delay(20);                      
  }
}
void hour34up () {
  for (i = 180; i > 80; i--) {
    servo18.write(i);
    servo16.write(i); 
    servo21.write(i); 
    servo15.write(i);
    servo20.write(i);   
    delay(20);                      
  }
}
void hour34down () {
  for (i = 90; i < 180; i++) { 
    servo18.write(i);
    servo16.write(i); 
    servo21.write(i); 
    servo15.write(i);
    servo20.write(i);         
    delay(20);                      
  }
}
void hour35up () {
  for (i = 180; i > 80; i--) {
    servo18.write(i);
    servo17.write(i);
    servo21.write(i); 
    servo15.write(i);
    servo20.write(i);   
    delay(20);                      
  }
}
void hour35down () {
  for (i = 90; i < 180; i++) { 
    servo18.write(i);
    servo17.write(i);
    servo21.write(i); 
    servo15.write(i);
    servo20.write(i);         
    delay(20);                      
  }
}
void hour36up () {
  for (i = 180; i > 80; i--) {
    servo18.write(i);
    servo19.write(i);
    servo21.write(i); 
    servo15.write(i);
    servo20.write(i);   
    delay(20);                      
  }
}
void hour36down () {
  for (i = 90; i < 180; i++) { 
    servo18.write(i);
    servo19.write(i);
    servo21.write(i); 
    servo15.write(i);
    servo20.write(i);         
    delay(20);                      
  }
}
void hour37up () {
  for (i = 180; i > 80; i--) {
    servo17.write(i);
    servo16.write(i);
    servo15.write(i);   
    delay(20);                      
  }
}
void hour37down () {
  for (i = 90; i < 180; i++) { 
    servo18.write(i);
    servo19.write(i);
    servo21.write(i);         
    delay(20);                      
  }
}
void hour38up () {
  for (i = 180; i > 80; i--) {
    servo17.write(i);
    servo16.write(i);
    servo15.write(i);
    servo18.write(i);
    servo19.write(i);
    servo20.write(i);
    servo21.write(i);   
    delay(20);                      
  }
}
void hour38down () {
  for (i = 90; i < 180; i++) { 
    servo17.write(i);
    servo16.write(i);
    servo15.write(i);
    servo18.write(i);
    servo19.write(i);
    servo20.write(i);
    servo21.write(i);         
    delay(20);                      
  }
}
void hour39up () {
  for (i = 180; i > 80; i--) {
    servo17.write(i);
    servo16.write(i);
    servo15.write(i);
    servo18.write(i);
    servo21.write(i);   
    delay(20);                      
  }
}
void hour39down () {
  for (i = 90; i < 180; i++) { 
    servo17.write(i);
    servo16.write(i);
    servo15.write(i);
    servo18.write(i);
    servo21.write(i);         
    delay(20);                      
  }
}

void hour40up () {
  for (i = 180; i > 80; i--) {
    servo22.write(i);
    servo23.write(i); 
    servo24.write(i);
    servo25.write(i); 
    servo26.write(i);
    servo27.write(i);   
    delay(20);                      
  }
}
void hour40down () {
  for (i = 90; i < 180; i++) { 
    servo22.write(i);
    servo23.write(i); 
    servo24.write(i);
    servo25.write(i); 
    servo26.write(i);
    servo27.write(i);          
    delay(20);                      
  }
}
void hour41up () {
  for (i = 180; i > 80; i--) {
    servo22.write(i);
    servo23.write(i);   
    delay(20);                      
  }
}
void hour41down () {
  for (i = 90; i < 180; i++) { 
    servo22.write(i);
    servo23.write(i);         
    delay(20);                      
  }
}
void hour42up () {
  for (i = 180; i > 80; i--) {
    servo24.write(i);
    servo23.write(i); 
    servo28.write(i); 
    servo26.write(i);
    servo27.write(i);   
    delay(20);                      
  }
}
void hour42down () {
  for (i = 90; i < 180; i++) { 
    servo24.write(i);
    servo23.write(i); 
    servo28.write(i); 
    servo26.write(i);
    servo27.write(i);         
    delay(20);                      
  }
}
void hour43up () {
  for (i = 180; i > 80; i--) {
    servo24.write(i);
    servo23.write(i); 
    servo28.write(i); 
    servo22.write(i);
    servo27.write(i);   
    delay(20);                      
  }
}
void hour43down () {
  for (i = 90; i < 180; i++) { 
    servo24.write(i);
    servo23.write(i); 
    servo28.write(i); 
    servo22.write(i);
    servo27.write(i);         
    delay(20);                      
  }
}
void hour44up () {
  for (i = 180; i > 80; i--) {
    servo25.write(i);
    servo28.write(i); 
    servo23.write(i); 
    servo22.write(i);   
    delay(20);                      
  }
}
void hour44down () {
  for (i = 90; i < 180; i++) { 
    servo25.write(i);
    servo28.write(i); 
    servo23.write(i); 
    servo22.write(i);         
    delay(20);                      
  }
}
void hour45up () {
  for (i = 180; i > 80; i--) {
    servo24.write(i);
    servo25.write(i);
    servo28.write(i); 
    servo22.write(i);
    servo27.write(i);   
    delay(20);                      
  }
}
void hour45down () {
  for (i = 90; i < 180; i++) { 
    servo24.write(i);
    servo25.write(i);
    servo28.write(i); 
    servo22.write(i);
    servo27.write(i);         
    delay(20);                      
  }
}
void hour46up () {
  for (i = 180; i > 80; i--) {
    servo25.write(i);
    servo28.write(i);
    servo22.write(i); 
    servo27.write(i);
    servo26.write(i);   
    delay(20);                      
  }
}
void hour46down () {
  for (i = 90; i < 180; i++) { 
    servo25.write(i);
    servo28.write(i);
    servo22.write(i); 
    servo27.write(i);
    servo26.write(i);         
    delay(20);                      
  }
}
void hour47up () {
  for (i = 180; i > 80; i--) {
    servo24.write(i);
    servo23.write(i);
    servo22.write(i);   
    delay(20);                      
  }
}
void hour47down () {
  for (i = 90; i < 180; i++) { 
    servo24.write(i);
    servo23.write(i);
    servo22.write(i);         
    delay(20);                      
  }
}
void hour48up () {
  for (i = 180; i > 80; i--) {
    servo22.write(i);
    servo23.write(i);
    servo24.write(i);
    servo25.write(i);
    servo26.write(i);
    servo27.write(i);
    servo28.write(i);   
    delay(20);                      
  }
}
void hour48down () {
  for (i = 90; i < 180; i++) { 
    servo22.write(i);
    servo23.write(i);
    servo24.write(i);
    servo25.write(i);
    servo26.write(i);
    servo27.write(i);
    servo28.write(i);         
    delay(20);                      
  }
}
void hour49up () {
  for (i = 180; i > 80; i--) {
    servo23.write(i);
    servo24.write(i);
    servo25.write(i);
    servo28.write(i);
    servo22.write(i);   
    delay(20);                      
  }
}
void hour49down () {
  for (i = 90; i < 180; i++) { 
    servo23.write(i);
    servo24.write(i);
    servo25.write(i);
    servo28.write(i);
    servo22.write(i);         
    delay(20);                      
  }
}
