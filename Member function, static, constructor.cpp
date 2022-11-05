/*
1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*/
#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setData(int r,int i)
    {
        a=r;
        b=i;
    }
    void showData1()
    {
        cout<<"First complex number is "<<endl;
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    void showData2()
    {
        cout<<"Second complex number is "<<endl;
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    void showData()
    {
        cout<<"sum of two complex number is "<<endl;
        cout<<a+b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }

};
int main()
{
    complex c1,c2,c3;
    c1.setData(3,5);
    c1.showData1();
    c2.setData(4,5);
    c2.showData2();
    c3=c1.add(c2);
    c3.showData();
}
