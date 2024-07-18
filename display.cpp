//This program takes info of student and display it on the screen
#include<iostream>
using namespace std;

class student{
    char name[20];
    int roll;
    char address[20];
    int marks;

    public:
    void getdata();
    void displaydata();
};

void student::getdata(){
    cout<<"Enter your Name:"<<endl;
    cin>>name;
    cout<<"Enter your Roll no:"<<endl;
    cin>>roll;
    cout<<"Enter your Address:"<<endl;
    cin>>address;
    cout<<"Enter your Total marks:"<<endl;
    cin>>marks;
}
void student::displaydata(){
    cout<<"Name:"<<name<<'\n'<<"Roll no:"<<roll<<'\n'<<"Address:"<<address<<'\n'<<"Marks:"<<marks<<'\n';
}

int main(){
    student s1;
    s1.getdata();
    s1.displaydata();
    return 0;
}