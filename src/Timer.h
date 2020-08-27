
class Timer
{

private:
int a[5];
int firstSecond;
bool delayStatus;


public:

int delay (int sec, int delayTime, bool on)
{
    {
        if (a[0] == 0 && on == true)
            {
                firstSecond = sec;
                a[0] = 1;                
            }
        
        if(on  == true)
        {          
            if (((firstSecond + delayTime) <= sec) && a[0] == 1)
            {
                delayStatus = true;
            }            
          
        }
        if (on == false)
        {            
            delayStatus = false;
            a[0] = 0;
        }    
        return(delayStatus);
    }
}





};


