#include "set.h"



int main() 
{   
    t.start();                                          //включение библиотеки системного времени (библиотека Times)////tthffgt
    //lcd.printf("Obsh T: %i\n", Sec);
    //lcd.printf("Work T: %i\n", Min);
    //LampNumber[0].Lamp();
    
    while(1)
    {
        
    drebezg_encoder(200);                                 // вызов классов с определенной частотой (200 мс), для избежания дребезга и последовательной обработки кода программы.
    LevelChoice (200);
    Level0 (200);
    Level1 (200);
    Level2 (200);
    TimerObsh (900,t);
    ResursT (200);    
    On_OffSystem(200);
   // Alarm (200);
    }
}