//This program adds time in hrs,mins and seconds
#include<iostream>
using namespace std;

class Time{
    int hr,min,sec;
    
    public:
    void get_time();
    void display_time();
    Time add_time(Time);

};

void Time :: get_time(){
    cout<<"Enter time in hr::min::sec\t";
    cin>>hr>>min>>sec;
}

void Time :: display_time(){
    cout<<"The added time is:\t"<<hr<<":"<<min<<":"<<sec<<"\n";
}

Time Time :: add_time(Time t2){
    Time t;
    t.sec = sec + t2.sec;
    t.min = min + t2.min + t.sec / 60;
    t.sec = t.sec % 60;
    t.hr = hr + t2.hr + t.min / 60;
    t.min = t.min % 60;
    return t;
};

int main(){
    Time t1,t2,t3;
    t1.get_time();
    t2.get_time();
    t3=t1.add_time(t2);
    t3.display_time();
    return 0;
}