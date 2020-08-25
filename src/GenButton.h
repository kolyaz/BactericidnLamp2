
//Класс GenButton предназначен для обработки логики кнопки-энкодера

class GenButton
{
private:
int a[5];


int FirstSecond;
bool SaveChange;
const int TimeDelaySaveChange = 2;  
bool buttonOneClick;
bool ResetCounter;
int count;


int RotationSave;
/*bool RotationRight;
bool RotationLeft;
bool RotationNoActivitty;*/
int DirectionOfRotation;

int NewSec;
int OldSec;
bool LoopRecording;
const int LoopRecordingTime = 1;    //время циклической перезаписи

    
    

public:

    ///////////////////////////////////////////////////////////////////////
    //Метод ButtonSaveMode служит для формирования сигнала на сохраниение
    //изменнных данных. Формирует true при Button == true, через время
    //в TimeDelaySaveChange.     
    
    int ButtonSaveMode(bool Button, int Sec)
    
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

    ///////////////////////////////////////////////////////////////////////
    //Метод ButtonOneClick служит для формирования одиночного имульса
    //при нажатии на кнопку.

    int ButtonOneClick(bool Button)
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

    ///////////////////////////////////////////////////////////////////////
    //Метод ButtonClickCounter выполняет функцию счетчика кол-ва нажатий
    //кнопки. Для сброса счетчика требуется записать "1" в ResetCounter.

    int ButtonClickCounter(bool Button, bool ResetCounter){

        if (buttonOneClick){
            for (size_t i = 0; i < 1; i++)
              {
                    count++;
              }
        }
        if (ResetCounter){
            count = 0;
        }

        return(count);        
    }

    ///////////////////////////////////////////////////////////////////////
    //Метод EncoderRotation служит для определения направления вращения энкодера
    
    int EncoderDirectionOfRotation (int Rotation, int Sec){
        if (a[2] == 0){
            OldSec = Sec;
            LoopRecording = 0;            
            a[2] = 1;
        }
        if (((Sec-LoopRecordingTime) == OldSec) && (a[2] == 1)){
            LoopRecording = 1;
            a[2] = 0;
        }

        if (LoopRecording){
            RotationSave = Rotation;
        }
        if (Rotation > RotationSave){         //энкодер вращается вправо
            DirectionOfRotation = 3;

        } else if (Rotation < RotationSave){    //энкодер вращается влево
            DirectionOfRotation = 1;

        } else if (Rotation == RotationSave && LoopRecording == 0){   //энкодер не вращается
            DirectionOfRotation = 2;
        }

        return(DirectionOfRotation);
        

       

        



    }

}; 




