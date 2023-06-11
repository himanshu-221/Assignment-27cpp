/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not. 
2. >> : To accept the time.
3. << : To display the time.*/
#include<iostream>
using namespace std;
class Time{
    int hours,minutes,seconds;
    public:
    void normalize()
    {
        Time temp;
        temp.minutes = minutes + seconds/60;
        temp.seconds = seconds % 60;
        temp.hours = hours + minutes/60;
        temp.minutes = minutes/60;
    }
    friend ostream& operator<<(ostream &os,Time &a)
    {
        cout<<"Hours : "<<a.hours<<endl<<"Minutes : "<<a.minutes<<endl<<"Seconds : "<<a.seconds;
        return cout;
    }
    friend istream& operator>>(istream &in,Time &t)
    {
        cout<<"Enter Hours :";
        cin>>t.hours;
        cout<<"Enter Minutes :";
        cin>>t.minutes;
        cout<<"Enter Seconds :";
        cin>>t.seconds;
        t.minutes = t.minutes + t.seconds/60;
        t.seconds = t.seconds % 60;
        t.hours = t.hours + t.minutes/60;
        t.minutes = t.minutes%60;
    }
    int operator==(Time t1)    //Overloading == Operator
        {
            int tot = hours * 3600 + minutes * 60 + seconds;
            int tot1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
            if(tot==tot1)
                cout<<"Time 1 and 2 is same";
            else
                cout<<"Time is not same";
        }
};
int main()
{
    Time t1,t2;
    cout<<"Enter First time:- "<<endl<<"---------------------"<<endl;
    cin>>t1;
    cout<<t1<<endl;
    cout<<"Enter Second time:- "<<endl<<"---------------------"<<endl;
    cin>>t2;
    cout<<t2<<endl;
    t1.operator==(t2);
    return 0;
}