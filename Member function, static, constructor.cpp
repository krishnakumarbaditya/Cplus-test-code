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
    return 0;
}

/*
2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)

*/
#include<iostream>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    void setTime(int hr,int mn,int sec)
    {
        h=hr;
        m=mn;
        s=sec;
    }
    void showTime()
    {
        cout<<endl;
        normalize();
        cout<<h<<" hr "<<m<<" min "<<s<<" sec "<<endl;
    }
    void normalize()
    {
        m = m  + s/60;
        s = s % 60;
        h = h + m/60;
        m = m % 60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(5,65,30);
    t1.showTime();
    t2.setTime(10,45,65);
    t2.showTime();
    t3=t2.add(t1);
    t3.showTime();
    return 0;
}

/*
3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

*/
#include<iostream>
using namespace std;
class cube
{
private:
    double side;
public:

    cube(double side1)
    {
        side=side1;
    }
    double volume()
    {
        return (side*side*side);
    }
};
int main()
{
    cube c(4);

    cout<<"volume of cube is "<<c.volume();
    return 0;
}

/*
4. Define a class Counter and Write a program to Show Counter using Constructor
*/
#include<iostream>
using namespace std;
class counter
{
private:
    static int count;
public:

    counter()
    {
        count++;
    }
    void showcount()
    {
        cout<<"counter is "<<count;
    }
};
int counter::count=0;
int main()
{
    counter c,c1;
    c.showcount();

    return 0;
}

/*
5. Define a class Date and write a program to Display Date and initialise date object
using Constructors.
*/
#include<iostream>
using namespace std;
class Date
{
private:
    int HR,MN,SEC;
public:

    Date(int h,int m,int s)
    {
        HR=h;
        MN=m;
        SEC=s;
    }
    void display()
    {
        normalize();
        cout<<HR<<" : "<<MN<<" : "<<SEC<<endl;
    }
    void normalize()
    {
        MN = MN  + SEC/60;
        SEC = SEC % 60;
        HR = HR + MN/60;
        MN = MN % 60;
    }
};

int main()
{
    Date D(3,45,65);
    D.display();

    return 0;
}

/*
6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.

*/
#include<iostream>
using namespace std;
class Student
{
private:
    string Name;
    int  Roll,Age,Class;
public:

    Student(string name,int roll,int age,int clas)
    {
        Name=name;
        Roll=roll;
        Age=age;
        Class=clas;
    }
    void display()
    {
        cout<<"Student details"<<endl;
        cout<<"Name = "<<Name<<endl;
        cout<<"Class = "<<Class<<endl;
        cout<<"Roll = "<<Roll<<endl;
        cout<<"Age = "<<Age<<endl;
    }

};

int main()
{
    string str = "krishna";
    Student S(str,65,21,12);
    S.display();

    return 0;
}
