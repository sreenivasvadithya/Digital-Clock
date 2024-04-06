#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <sstream>
#include <ctime>
#include <conio.h>
using namespace std;

void header() {
    system("Color 0A");
    cout << "\t\t  =================================================================================================\n";
    cout << "\t\t|  ****     *    *****   *  *******     *      *             ****  *        ***      ****  *    *  |\n";
    cout << "\t\t|  *    *   *   *        *     *      *    *   *            *      *      *      *  *      *  *    |\n";
    cout << "\t\t|  *     *  *  *   ****  *     *     *      *  *            *      *      *      *  *      **      |\n";
    cout << "\t\t|  *    *   *  *   *  *  *     *     ********  *            *      *      *      *  *      *  *    |\n";
    cout << "\t\t|  ****     *   ****  *  *     *     *      *  ******        ****  *****    ***      ****  *    *  |\n";
    cout << "\t\t  =================================================================================================\n";
}

void time() {
     //getting local time
    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
    time_t now = time(0);
    tm *ltm = localtime(&now);
   	//store local time in variables
    int sec = (timePtr->tm_sec);
    int min = (timePtr->tm_min);
    int hours = (timePtr->tm_hour);
    string timestr;
    int n;
    bool exit = false;
    //convert time to 12 hrs format
    if (hours > 12)
    {
        
        hours = hours % 12;
        timestr = "PM";
    }
    else
    {
        timestr = "AM";
    }
    while (exit==false)
    {
        system("cls");
        
        header();
        system("Color 05");
       	//printing time
        cout << "\n\n\n\t\t\t\t\t\tThe Current Time and Date \n";
        cout << "\t\t\t\t\t\t___________________\n\n";
        cout << "\t\t\t\t\t\t| " << hours << " : " << min << " : " << sec << " " << timestr << "  |" << endl;
        cout << "\t\t\t\t\t\t|  Year: "<< 1900 + ltm->tm_year << "     |"<< endl;
        cout << "\t\t\t\t\t\t| Month: "<< 1 + ltm->tm_mon<< "       |"<<endl;
        cout << "\t\t\t\t\t\t|   Day: "<< ltm->tm_mday << "       |"<<endl;
        cout << "\t\t\t\t\t\t___________________\n\n";
       	//increment sec min and hours	
        system("color 3B");
        sec++;
        if (sec > 59)
        {
            sec = 0;
            min++;
        }
        if (min > 59)
        {
            min = 0;
            hours++;
        }
        if (hours > 12)
        {
            hours = 1;
        }
        std::cout<<"\n\t\tPress Esc to Set Alarm"<<std::endl;
        Sleep(1000);
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            exit = true;
        }
        

    }


}

int StopWatch(int HH=00,int MM=00,int SS=00) {
    system ("CLS");
       //int HH = 00, MM = 00, SS = 00;
       cout << "\t\t\t\t ======================";
       cout << "\n\t\t\t\t|      STOP WATCH     |\n";
       cout << "\t\t\t\t ======================";
       cout << "\n\t\t\t\t ---Press any key to start---";

       cout << "\n\t\t\t\t\t "<< HH << " : " << MM << " : " << SS;
       

       getch();
       while (!_kbhit())
       {
           SS++;
           Sleep(1000);
           if (SS > 59)
           {
              MM++;
              SS = 00;
           }
           if (MM > 59)
           {
               HH++;
               MM = 00;
           }
            system("CLS");
            cout << "\t\t\t\t =====================";
            cout << "\n\t\t\t\t|      STOP WATCH     |\n";
            cout << "\t\t\t\t =====================";
            cout << "\n\t\t\t\t HH : MM : SS";
            cout << "\n\t\t\t\t "<< HH << " : " << MM << " : " << SS;
            cout << "\n\t\t\t\t ----press any key to STOP----";

       }
         getch();
         cout << "\n\t\t\t\t The time after pausing is:";
         cout << " \n\t\t\t\t "<< HH << " : " << MM << " : " << SS ;
         cout<<"\nresume 1. reset 2\n";
         int k1;
         cin>>k1;
         if(k1==1){
            StopWatch(HH,MM,SS);
         }else{
            return 0;
         }
         getch();
         return 0;
}
void Time() {
     //getting local time and date
    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
    time_t now = time(0);
    tm *ltm = localtime(&now);
   	//store local time in variables
    int sec = (timePtr->tm_sec);
    int min = (timePtr->tm_min);
    int hours = (timePtr->tm_hour);
    string timestr;
    int n;
    bool exit = false;
    //convert time to 12 hrs format
    if (hours > 12)
    {
        
        hours = hours % 12;
        timestr = "PM";
    }
    else
    {
        timestr = "AM";
    }
    while (exit==false)
    {
        system("cls");
        header();
       	//printing time
        cout << "\n\n\n\t\t\tThe Current Time and Date \n";
        cout << "\t\t\t___________________\n\n";
        cout << "\t\t\t| " << hours << " : " << min << " : " << sec << " " << timestr << "  |" << endl;
        cout << "\t\t\t|  Year: "<< 1900 + ltm->tm_year << "     |"<< endl;
        cout << "\t\t\t| Month: "<< 1 + ltm->tm_mon<< "       |"<<endl;
        cout << "\t\t\t|   Day: "<< ltm->tm_mday << "       |"<<endl;
        cout << "\t\t\t___________________\n\n";
       	//increment sec, min and hours	
        sec++;
        if (sec > 59)
        {
            sec = 0;
            min++;
        }
        if (min > 59)
        {
            min = 0;
            hours++;
        }
        if (hours > 12)
        {
            hours = 1;
        }
        std::cout<<"\n\t\tPress Esc to Exit Clock"<<std::endl;
        Sleep(1000);
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            exit = true;
        }
        
    }

}

class alarm {
private:
    tm alarmtime,  presenttime, differenceintime; 
    time_t now;

public:
    alarm() //constructor of class
    {
    now = time(0);
    presenttime = *localtime(&now);
    alarmtime =  presenttime;
    alarmtime.tm_sec = 0;
    }
    void getTime();
    void timeDifference();
    void start_alarm();
};

void alarm :: getTime() {
     string time;
        cout<<"Enter 1. Alarm Time in 24-hour format [HH:MM]: "; getline(cin>>ws,time);
        int pos = 0, h;
        while ((pos = time.find(':')) != string::npos)
        {
            string token = time.substr(0,pos);
            stringstream convert (token);
            convert >> alarmtime.tm_hour;
            time.erase(0,pos+1);
        }
        stringstream convert (time);
        convert >> alarmtime.tm_min;
}
void alarm :: timeDifference()  
// function to culculate differenc b|e current time and alarmtime
    {
        
        int sec = difftime(mktime(&alarmtime),now);
        differenceintime.tm_min = sec / 60;
        differenceintime.tm_hour = differenceintime.tm_min / 60;
        differenceintime.tm_min = differenceintime.tm_min % 60;
        differenceintime.tm_sec = sec % 60;
        if (sec < 0)
        {
            differenceintime.tm_hour = 24 + differenceintime.tm_hour - 1;
            differenceintime.tm_min = 0 - differenceintime.tm_min;
            differenceintime.tm_sec = 0 - differenceintime.tm_sec;
        }
    }

void alarm :: start_alarm() {  
    //function to start alarm and print the time reaming to hit the desired time.
    while (true)
        {
            system("cls");
          
            now = time(0);
             presenttime = *localtime(&now);
            timeDifference();
            time_t t = time(NULL);
            tm *timePtr = localtime(&t);
            time_t now = time(0);
            tm *ltm = localtime(&now);
            //store local time in variables
            int sec = (timePtr->tm_sec);
            int min = (timePtr->tm_min);
            int hours = (timePtr->tm_hour);
            string timestr;
            int n;
            bool exit = false;
            //convert time to 12 hrs format
            if (hours > 12)
            {
                
                hours = hours % 12;
                timestr = "PM";
            }
            else
            {
                timestr = "AM";
            }

    header();
       	//printing time
                cout << "\n\n\n\t\t\tThe Current Time and Date \n";
                cout << "\t\t\t___________________\n\n";
                cout << "\t\t\t| " << hours << " : " << min << " : " << sec << " " << timestr << "  |" << endl;
                cout << "\t\t\t|  Year: "<< 1900 + ltm->tm_year << "     |"<< endl;
                cout << "\t\t\t| Month: "<< 1 + ltm->tm_mon<< "       |"<<endl;
                cout << "\t\t\t|   Day: "<< ltm->tm_mday << "       |"<<endl;
                cout << "\t\t\t___________________\n\n";
                //increment sec min and hours	
                sec++;
                if (sec > 59)
                {
                    sec = 0;
                    min++;
                }
                if (min > 59)
                {
                    min = 0;
                    hours++;
                }
                if (hours > 12)
                {
                    hours = 1;
                }
      
       
            cout<<"TIME REMAINING:    "<<differenceintime.tm_hour<<":"<<differenceintime.tm_min<<":"<<differenceintime.tm_sec;
            if (differenceintime.tm_hour == 0 && differenceintime.tm_min == 0 && differenceintime.tm_sec == 0)
            {
                cout<<endl<<"Time Ended"<<endl<<">>> Press CTRL+C or Close the window to stop the alarm <<<"<<endl;
                break;
            
            }
            Sleep(1000);
        }
}


void setAlarm() {
    //cout<<"hii";
    alarm a;
    a.getTime();
    a.start_alarm();
    a.start_alarm();
    for (int i = 0; ; i = i + 50)
        Beep(i,1000);

}

int main() {    
    int choice=0;
    Time();
    while(choice!=3) {
        cout << "\t\t\n\n                   1. Press 1 to set StopWatch\n";
        cout << "\t\t   2. Press 2 to set Alaram\n"; 
        cout << "\t\t   3. Press 3 to exit\n";
        cin >> choice;
        switch ((choice))
        {
        case 1:
            StopWatch(00,00,00);
            break;
        case 2:
            setAlarm();
            break;
        case 3:
            choice=3;
            break;
        default:
            break;
    }
    }
    return 0;
}