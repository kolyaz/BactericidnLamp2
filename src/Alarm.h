

class Alarm
{
private:


public:
    //Авария лампы
  int AlarmLamp(bool ActiveAlarmLamp){        
        //lcd.locate(13,0);        
        //lcd.printf("<!>");
        if (ActiveAlarmLamp)
        {
            return(1);
        }
        else
        {
            return(0);
        }

    }

};




