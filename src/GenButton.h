
//Класс GenButton предназначен для обработки логики кнопки-энкодера

class GenButton
{
private:
    
    

public:
int FirstSecond;
bool SaveChange;
int a = 0;
const int TimeDelaySaveChange = 3;

    //Метод ButtonSaveMode служит для формирования сигнала на сохраниение
    //изменнных данных. Формирует true при Button == true, через время
    //в TimeDelaySaveChange.

    int ButtonSaveMode (bool Button, int Sec)
    {      
        if (a == 0)
            {
                FirstSecond = Sec;
                a = 1;
            }

        if(Button  == true){
          
            if (((FirstSecond + TimeDelaySaveChange) <= Sec) && a == 1)
            {
                SaveChange = true;
            }            
            else
            {
                SaveChange = false;
            }            
        }
        if (Button == false){

            SaveChange = false;
            a = 0;
        }    
        return(SaveChange);
    }

}; 




