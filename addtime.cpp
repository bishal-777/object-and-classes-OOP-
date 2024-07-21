//This program adds time in hrs,mins and seconds
#include<iostream>
using namespace std;

class time{
    int hr,min,sec;
    
    public:
    void get_time();
    void display_time();
    time add_time(time);

};