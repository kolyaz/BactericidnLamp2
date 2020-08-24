#include "set.h"




DigitalOut led(LED3);
int main() 
{   
    t.start();                                          //включение библиотеки системного времени (библиотека Times)////tthffgt
    //lcd.printf("Obsh T: %i\n", Sec);
    //lcd.printf("Work T: %i\n", Min);
    lcd.locate(3, 1); 
    lcd.setCursor(lcd.CurOn_BlkOn); ///Курсор
    
    while(1)
    {
     LampInit();
     printf("but: %i\n", ButtonCounter);
     printf("button: %i\n", ButtonClick);
     //printf("rotate: %i\n", SetPointGeneralResurs);
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