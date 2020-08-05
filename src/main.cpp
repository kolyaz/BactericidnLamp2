#include "set.h"


DigitalOut led(LED3);
int main() 
{   
    t.start();                                          //включение библиотеки системного времени (библиотека Times)////tthffgt
    //lcd.printf("Obsh T: %i\n", Sec);
    //lcd.printf("Work T: %i\n", Min);
    LampNumber[0].LampInit(1);
    
    while(1)
    {
    //led=!led;    
    // LampNumber[0].LampPin=(!LampNumber[0].LampPin);
    // LampNumber[1].LampPin=(!LampNumber[1].LampPin);
    // LampNumber[2].LampPin=(!LampNumber[2].LampPin);
    // LampNumber[3].LampPin=(!LampNumber[3].LampPin);
    // LampNumber[4].LampPin=(!LampNumber[4].LampPin);
    //  LampNumber[5].LampPin=(!LampNumber[5].LampPin);
    //  LampNumber[6].LampPin=(!LampNumber[6].LampPin);
    //  LampNumber[7].LampPin=(!LampNumber[7].LampPin);
    drebezg_encoder(200);                                 // вызов классов с определенной частотой (200 мс), для избежания дребезга и последовательной обработки кода программы.
    LevelChoice (200);
    Level0 (200);
    Level1 (200);
    Level2 (200);
    TimerObsh (900,t);
    ResursT (200);    
    On_OffSystem(200);
   // Alarm (200);
//    if (1)
//    {   
//        wait_ms(1000);
//       // LampNumber[0].LampPin=(!LampNumber[0].LampPin);
       
//    }
    }
}