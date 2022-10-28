/*
1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number
*/
#include<iostream>
using namespace std;
class complex
{
private:
    int real,img;
public:
    void set(int r,int i)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<"Complex Number is "<<endl;
        cout<<real<<" + "<<img<<"i";
    }
};
int main()
{
    complex c1;
    c1.set(3,4);
    c1.print();
}
