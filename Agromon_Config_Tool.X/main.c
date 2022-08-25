/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18LF24K42
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include<xc.h>

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {
        // Add your application code
        int a,b,c,d,e,f,g,idss;
String wifi,mySt;
long previousMillis = 0; 
long interval = 1000; 
unsigned long currentMillis = millis();
void setup() {
  Serial.begin(9600);
}

////////////////////////////////////////////////////////////////////
////////////////////////////MAIN///////////////////////////////////
////////////////////////////////////////////////////////////////////
void loop() {
  //while(true){
    //Serial.println(GetTemp(),1);
    //}
  while (Serial.available() == 0) {}     
  String teststr = Serial.readString();  
  wifi = teststr;
  wifi = teststr.substring(0, 4);
  teststr.trim();
///////////////////////////
//Network Write
  if (wifi == "N-128") {
    if (Serial.available() > 0) {

   }
  if ((mySt.length() >0)&(!Serial.available())) {
     Serial.print(mySt); //Print received string to Computer
     mySt=",";
   }
    net1Write();
  }
  if (teststr == "N-64") {
    net2Write();
  }
  if (teststr == "N-32") {
    net3Write();
  }
  if (teststr == "N-16") {
    net4Write();
  }
  //Network Check
  if (teststr == "net") {
    netType();
  }
  //Network Connection Check
  if (teststr =="connectionStat"){
    connectionStatus();
  }
///////////////////////////  
       
///////////////////////////
//Sensor 1 -1                
  if (teststr == "1-A-128") {
    sen1Write();
  } 
  
  if (teststr == "1-A-64") {
    sen2Write(); 
  }  
  if (teststr == "1-A-32") {
    sen3Write();
  }
  if (teststr == "1-A-16") {
    sen4Write();
  }
  if (teststr == "1-A-8") {
    sen5Write();
  } 
  if (teststr == "1-A-4") {
    sen6Write();
  }
  if (teststr == "1-A-2") {
    sen7Write();
  }
  if (teststr == "1-A-1") {
    sen8Write();
  }
///////////////////////////
//Sensor 1 -2
  
  if (teststr == "1-B-128") {
    sen9Write();
  } 
  if (teststr == "1-B-64") {
    sen10Write();
  }
  if (teststr == "1-B-32") {
    sen11Write();
  }
  if (teststr == "1-B-16") {
    sen12Write();
  }
  if (teststr == "1-B-8") {
    sen13Write();
  } 
  if (teststr == "1-B-4") {
    sen14Write();
  }
  if (teststr == "1-B-2") {
    sen15Write();
  }
///////////////////////////
//senAsor 2 -1                
  if (teststr == "2-A-128") {
    senA1Write();
  } 
  if (teststr == "2-A-64") {
    senA2Write(); 
  }  
  if (teststr == "2-A-32") {
    senA3Write();
  }
  if (teststr == "2-A-16") {
    senA4Write();
  }
  if (teststr == "2-A-8") {
    senA5Write();
  } 
  if (teststr == "2-A-4") {
    senA6Write();
  }
  if (teststr == "2-A-2") {
    senA7Write();
  }
  if (teststr == "2-A-1") {
    senA8Write();
  }
///////////////////////////
//senAsor 2 -2
  
  if (teststr == "2-B-128") {
    senA9Write();
  } 
  if (teststr == "2-B-64") {
    senA10Write();
  }
  if (teststr == "2-B-32") {
    senA11Write();
  }
  if (teststr == "2-B-16") {
    senA12Write();
  }
  if (teststr == "2-B-8") {
    senA13Write();
  } 
  if (teststr == "2-B-4") {
    senA14Write();
  }
  if (teststr == "2-B-2") {
    senA15Write();
  }
///////////////////////////
///senBsor 3 -1                
  if (teststr == "3-A-128") {
    senB1Write();
  } 
  if (teststr == "3-A-64") {
    senB2Write(); 
  }  
  if (teststr == "3-A-32") {
    senB3Write();
  }
  if (teststr == "3-A-16") {
    senB4Write();
  }
  if (teststr == "3-A-8") {
    senB5Write();
  } 
  if (teststr == "3-A-4") {
    senB6Write();
  }
  if (teststr == "3-A-2") {
    senB7Write();
  }
  if (teststr == "3-A-1") {
    senB8Write();
  }
///////////////////////////
//senBsor 3 -2
  
  if (teststr == "3-B-128") {
    senB9Write();
  } 
  if (teststr == "3-B-64") {
    senB10Write();
  }
  if (teststr == "3-B-32") {
    senB11Write();
  }
  if (teststr == "3-B-16") {
    senB12Write();
  }
  if (teststr == "3-B-8") {
    senB13Write();
  } 
  if (teststr == "3-B-4") {
    senB14Write();
  }
  if (teststr == "3-B-2") {
    senB15Write();
  }
///////////////////////////
  //Reset
  if (teststr == "resetAll") {
    Reset();
  }
  if (teststr == "reset1") {
    Reset1();
    Reset2();
  }
  if (teststr == "reset2") {
    Reset3();
    Reset4();
  }
  if (teststr == "reset3") {
    Reset5();
    Reset6();
  }
  if (teststr == "resetNet") {
    Reset7();
  }
///////////////////////////
//Malicious
  if (teststr == "read") {
    senRead();
  }
  if(teststr == "storage"){
    eepromVal();
  }
  if(teststr == "memavail"){
    eeavail();
  }
  if(teststr =="checkAll"){
    check();
  }
  if(teststr =="ssid"){
    ssid();
  }
  if(teststr =="psswd"){
    psswd();
  }
  if(teststr =="temp"){
    Serial.println(GetTemp(),1);
  }
  if(teststr =="readSen"){
    sensorValue();
  }

}
////////////////////////////////////////////////////////////////////
/////////////////////////FUNCTION///////////////////////////////////
////////////////////////////////////////////////////////////////////

//Check All
void check(){
  int eeprom = 0,sen = 0;
  int net=0,a=0,b,c;
  net =EEPROM.read(6);
  if(net == 128){
    a=1;
  }
  if(net == 64){
    a=2;
  }
  if(net == 32){
    a=3;
  }
  if(net == 16){
    a=4;
  }
  if(EEPROM.read(0)>0){
    eeprom += 1;
    sen += 1; 
    }
    if(EEPROM.read(1)>0){
    eeprom += 1;
    sen += 1; 
    }
    if(EEPROM.read(2)>0){
    eeprom += 1;
    sen += 1; 
    }
    if(EEPROM.read(3)>0){
    eeprom += 1;
    sen += 1; 
    }
    if(EEPROM.read(4)>0){
    eeprom += 1;
    sen += 1; 
    }
    if(EEPROM.read(5)>0){
    eeprom += 1;
    sen += 1; 
    }
    if(EEPROM.read(6)>0){
    eeprom += 1;
    }
    if (Serial.available()) {
        b=0;
        }
   else{
    b=1;
   } 
   c=1024-eeprom;
    Serial.print("10000");
    Serial.print(",");
    Serial.print(sen);
    Serial.print(",");
    Serial.print(c);
    Serial.print(",");
    Serial.print(a);
    Serial.print(",");
    Serial.print(b);
    Serial.println("");
    
}
///////////////////////////


///////////////////////////
//EEPROM Adrees Check
///////////////////////////
//Check EEPROM Storage
int eepromVal(){
  int eeprom = 0;
  if(EEPROM.read(0)>0){
    eeprom += 1;
    }
    if(EEPROM.read(1)>0){
    eeprom += 1;
    }
    if(EEPROM.read(2)>0){
    eeprom += 1;
    }
    if(EEPROM.read(3)>0){
    eeprom += 1;
    }
    if(EEPROM.read(4)>0){
    eeprom += 1;
    }
    if(EEPROM.read(5)>0){
    eeprom += 1;
    }
    if(EEPROM.read(6)>0){
    eeprom += 1;
    }
    
    Serial.println(1024 - eeprom);
  }

//EEPROMP Memory Check
void eeavail(){
    if(EEPROM.read(0)!=0||EEPROM.read(1)!=0){
    Serial.println("There is Memory in Input 1");
    }
    if(EEPROM.read(2)!=0||EEPROM.read(3)!=0){
    Serial.println("There is Memory in Input 2");
    }
    if(EEPROM.read(4)!=0||EEPROM.read(5)!=0){
    Serial.println("There is Memory in Input 3");
    }
    if(EEPROM.read(6)!=0){
    Serial.println("There is Memory in Network");
    }
    if(EEPROM.read(0)==0&&EEPROM.read(1)==0){
    Serial.println("There is No Memory in Input 1");
    }
    if(EEPROM.read(2)==0&&EEPROM.read(3)==0){
    Serial.println("There is No Memory in  Input 2");
    }
    if(EEPROM.read(4)==0&&EEPROM.read(5)==0){
    Serial.println("There is No Memory in  Input 3");
    }
    if(EEPROM.read(6)==0){
    Serial.println("There is No Memory in Network");
    }   
  }
//Check Connected Sensor
int sensorValue(){
  int sen=0;
  if(EEPROM.read(0)>0){
    sen += 1;    
    }
    if(EEPROM.read(1)>0){
    sen += 1;
    }
    if(EEPROM.read(2)>0){
    sen += 1;
    }
    if(EEPROM.read(3)>0){
    sen += 1;
    }
    if(EEPROM.read(4)>0){
    sen += 1;
    }
    if(EEPROM.read(5)>0){
    sen =+ 1;
    }
    Serial.println(sen);
    }
  
///////////////////////////
//Network
///////////////////////////
//Devidce Id
int id(){
  int ids=10000;
  return ids;
}
//Network Id
int ssid(){
  Serial.print("Test");
}

//Network Password
void psswd(){
  Serial.println("1234");  
}

//Network Type
//Network Type - Wifi
void net1Write(){
  if(EEPROM.read(6)>0){
    Serial.println("There is Memory in Addres 6");
    Serial.println("Please Clear Memory in Addres 6");
  }

  else{
    EEPROM.write(6, 128);
  } 
}
//Network Type - Lon
void net2Write(){
  if(EEPROM.read(6)>0){
    Serial.println("There is Memory in Addres 6");
    Serial.println("Please Clear Memory in Addres 6");
  }

  else{
    EEPROM.write(6, 64);
  } 
}
//Network Type - Sigfox
void net3Write(){
  if(EEPROM.read(6)>0){
    Serial.println("There is Memory in Addres 6");
    Serial.println("Please Clear Memory in Addres 6");
  }

  else{
    EEPROM.write(6, 32);
  } 
}
//Network Type - 4G
void net4Write(){
  if(EEPROM.read(6)>0){
    Serial.println("There is Memory in Addres 6");
    Serial.println("Please Clear Memory in Addres 6");
  }

  else{
    EEPROM.write(6, 16);
  } 
}
//Check Network Type
int netType(){
  int net;
  net = EEPROM.read(6);
  if(net == 128){
    Serial.println("1");
  }
  if(net == 64){
    Serial.println("2");
  }
  if(net == 32){
    Serial.println("3");
  }
  if(net == 16){
    Serial.println("4");
  }
  if(net == 0)
  {
    Serial.println("0");
  }
}
//Network Check Connection
int connectionStatus(){
   if (Serial.available()) {
        Serial.print("0");
        }
   else{
    Serial.print("1");
   } 
}
///////////////////////////
//Read Sensor Mememory
void senRead(){  
  a = EEPROM.read(0);
  b = EEPROM.read(1);
  c = EEPROM.read(2);
  d = EEPROM.read(3);
  e = EEPROM.read(4);
  f = EEPROM.read(5);
  g = EEPROM.read(6);
  Serial.print(a);
  Serial.print(",");
  Serial.print(b); 
  Serial.print(","); 
  Serial.print(c);
  Serial.print(",");
  Serial.print(d);
  Serial.print(",");
  Serial.print(e);
  Serial.print(",");
  Serial.print(f);
  Serial.print(",");
  Serial.println(g);
}
  
  

///////////////////////////
//Input 1 Part 1
///////////////////////////
//Sensor 1
void sen1Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }

  else{
    EEPROM.write(0, 128);
  }
  }
//Sensor 2
void sen2Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }

  else{
    EEPROM.write(0, 64);
  } 
  }
//Sensor 3
void sen3Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }

  else{
    EEPROM.write(0, 32);
  }
  }
//Sensor 4
void sen4Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }

  else{
    EEPROM.write(0, 16);
  }
  }
//Sensor 5
void sen5Write(){
 if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(0, 8);
  }
  }
//Sensor 6
void sen6Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(0, 4);
  }
  }
//Sensor 7
void sen7Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(0, 2);
  }
  }
//Sensor 8
void sen8Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(0, 1);
  }
  }
///////////////////////////

///////////////////////////
//Input 1 Part 2
///////////////////////////
//Sensor 9
void sen9Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(1, 128);
  }
  }
//Sensor 10
void sen10Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(1, 64);
  }
  }
//Sensor 11
void sen11Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(1, 32);
  }
  }
//Sensor 12
void sen12Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(1, 16);
  }
  }
//Sensor 13
void sen13Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(1, 8);
  }
  }
//Sensor 14
void sen14Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(1, 4);
  }
  }
//Sensor 15
void sen15Write(){
  if(EEPROM.read(0)>0 ||EEPROM.read(1)>0 ){
    Serial.println("There is Memory in Input 1");
    Serial.println("Please Clear Memory in Input 1");
  }
  else{
    EEPROM.write(1, 2);
  }
  }
///////////////////////////



///////////////////////////
//Input 2 Part 1
///////////////////////////
//Sensor 1
void senA1Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }

  else{
    EEPROM.write(2, 128);
  }
  }
//senAsor 2
void senA2Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }

  else{
    EEPROM.write(2, 64);
  } 
  }
//senAsor 3
void senA3Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }

  else{
    EEPROM.write(2, 32);
  }
  }
//senAsor 4
void senA4Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }

  else{
    EEPROM.write(2, 16);
  }
  }
//senAsor 5
void senA5Write(){
 if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(2, 8);
  }
  }
//senAsor 6
void senA6Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(2, 4);
  }
  }
//senAsor 7
void senA7Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(2, 2);
  }
  }
//senAsor 8
void senA8Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(2, 1);
  }
  }
///////////////////////////
//Input 2 Part 2
///////////////////////////
//senAsor 9
void senA9Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(3, 128);
  }
  }
//senAsor 10
void senA10Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(3, 64);
  }
  }
//senAsor 11
void senA11Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(3, 32);
  }
  }
//senAsor 12
void senA12Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(3, 16);
  }
  }
//senAsor 13
void senA13Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(3, 8);
  }
  }
//senAsor 14
void senA14Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(3, 4);
  }
  }
//senAsor 15
void senA15Write(){
  if(EEPROM.read(2)>0 || EEPROM.read(3)>0){
    Serial.println("There is Memory in  Input 2");
    Serial.println("Please Clear Memory in  Input 2");
  }
  else{
    EEPROM.write(3, 2);
  }
  }
///////////////////////////


///////////////////////////
//Input 3 Part 1
///////////////////////////
//senBsor 1
void senB1Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }

  else{
    EEPROM.write(4, 128);
  }
  }
//senBsor 2
void senB2Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }

  else{
    EEPROM.write(4, 64);
  } 
  }
//senBsor 3
void senB3Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }

  else{
    EEPROM.write(4, 32);
  }
  }
//senBsor 4
void senB4Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }

  else{
    EEPROM.write(4, 16);
  }
  }
//senBsor 5
void senB5Write(){
 if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(4, 8);
  }
  }
//senBsor 6
void senB6Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(4, 4);
  }
  }
//senBsor 7
void senB7Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(4, 2);
  }
  }
//senBsor 8
void senB8Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(4, 1);
  }
  }
///////////////////////////
//Input 3 Part 2
///////////////////////////
//senBsor 9
void senB9Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(5, 128);
  }
  }
//senBsor 10
void senB10Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(5, 64);
  }
  }
//senBsor 11
void senB11Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(5, 32);
  }
  }
//senBsor 12
void senB12Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(5, 16);
  }
  }
//senBsor 13
void senB13Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(5, 8);
  }
  }
//senBsor 14
void senB14Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(5, 4);
  }
  }
//senBsor 15
void senB15Write(){
  if(EEPROM.read(4)>0 || EEPROM.read(5)>0){
    Serial.println("There is Memory in  Input 3");
    Serial.println("Please Clear Memory in  Input 3");
  }
  else{
    EEPROM.write(5, 2);
  }
  }
///////////////////////////
 
///////////////////////////
//EEPROM Reset
///////////////////////////
//EEPROM Reset All
void Reset(){
  for (int i = 0 ; i < EEPROM.length() ; i++) {
      EEPROM.write(i, 0);
   }
}
//EEPROM Reset Address 0
void Reset1(){
  EEPROM.write(0, 0);
}
//EEPROM Reset Address 1
void Reset2(){
  EEPROM.write(1, 0);
}
//EEPROM Reset Address 2
void Reset3(){
  EEPROM.write(2, 0);
}
//EEPROM Reset Address 3
void Reset4(){
  EEPROM.write(3, 0);
}
//EEPROM Reset Address 4
void Reset5(){
  EEPROM.write(4, 0);
}
//EEPROM Reset Address 5
void Reset6(){
  EEPROM.write(5, 0);
}
//EEPROM Reset Address 6
void Reset7(){
  EEPROM.write(6, 0);
}
///////////////////////////

///////////////////////////
//Temperature Check
double GetTemp(void)
{ 
  unsigned int wADC;
  double t;
 
  ADMUX = (_BV(REFS1) | _BV(REFS0) | _BV(MUX3));
  ADCSRA |= _BV(ADEN); 
  
  delay(1000);         
  ADCSRA |= _BV(ADSC);  
  while (bit_is_set(ADCSRA,ADSC));
  wADC = ADCW;
  t = (wADC - 310.31 ) / 1.22;
  return (t);
}
///////////////////////////
    }
}
/**
 End of File
*/