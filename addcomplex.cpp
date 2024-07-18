//This program add two complex numbers
#include<iostream>
using namespace std;

class complex{
    int real,imag;
    
    public:
    void getdata();
    void add(complex,complex);
    void display();
};

void complex::getdata(){
    cout<<"Enter real and imaginary part from complex number of the form a+ib,where a->real part and b->imaginary part:"<<endl;
    cin>>real>>imag;
}

void complex::add(complex c1,complex c2){
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}

void complex::display(){
    cout<<"The sum is:"<<real<<"+"<<imag<<"i"<<endl;
}

int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.add(c1,c2);
    c3.display();
    return 0;
}