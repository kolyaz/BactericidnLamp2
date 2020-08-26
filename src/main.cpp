#include "set.h"





DigitalOut led(LED3);
int main() 
{   
    t.start();                                          //включение библиотеки системного времени (библиотека Times)////tthffgt
    //lcd.printf("Obsh T: %i\n", Sec);
    //lcd.printf("Work T: %i\n", Min);
    //lcd.setCursor(lcd.CurOn_BlkOn); ///Курсор
    


    
    while(1)
    {
     LampInit();
     printf("ButtonClick: %i\n", FTrig);
     printf("a1 %i\n", a1);
     printf("a2: %i\n", a2);
     printf("rotate: %i\n", rotate);
     //printf("Level: %i\n", LampNumber[0].LampResurs_Set);
     printf("Sec: %i\n", Sec);

    


   
     
    //led=!led;    
    // LampNumber[0].LampPin=(!LampNumber[0].LampPin);
    // 
    drebezg_encoder(200);                               // вызов классов с определенной частотой (200 мс), для избежания дребезга и последовательной обработки кода программы.
    LevelChoice (200);
    Level0 (200);
    Level1 (200);
    Level2 (200);
    LevelOptions();
    

    TimerObsh (900,t);
    ResursT (200);    
    On_OffSystem(200);
   // Alarm (200);
   Button();

   


    
    }
}