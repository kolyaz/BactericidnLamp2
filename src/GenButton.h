
//Класс GenButton предназначен для обработки логики кнопки-энкодера

class GenButton
{
private:
int a[5];


int FirstSecond;
bool SaveChange;
const int TimeDelaySaveChange = 3;
bool buttonOneClick;
    
    

public:


    //Метод ButtonSaveMode служит для формирования сигнала на сохраниение
    //изменнных данных. Формирует true при Button == true, через время
    //в TimeDelaySaveChange.     

    int ButtonSaveMode (bool Button, int Sec)
    
    {
        if (a[0] == 0)
            {
                FirstSecond = Sec;
                a[0] = 1;
                
            }

        if(Button  == true){
          
            if (((FirstSecond + TimeDelaySaveChange) <= Sec) && a[0] == 1)
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
            a[0] = 0;
        }    
        return(SaveChange);
    }

    //Метод ButtonOneClick служит для формирования одиночного имульса
    //при нажатии на кнопку.

    int ButtonOneClick (bool Button)
    {
        if (Button && a[1] == 0){

            buttonOneClick = true;
        }
        else
        {
            buttonOneClick = false;
        }
        
        
        if (buttonOneClick){
            
            a[1] = 1;
        }

        if (Button == false)
        {
            a[1] = 0;
        }
        return(buttonOneClick);
    }

}; 




