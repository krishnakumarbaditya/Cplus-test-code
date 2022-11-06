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
    int dd,mm,yy;
public:

    Date(int day,int month,int year)
    {
        dd=31;
        mm=12;
        yy=2015;
        cout<<"Date object has been created----"<<endl;
    }
    void display()
    {
        cout<<"Entered date is :: ";
        cout<<dd<<" - "<<mm<<" - "<<yy<<endl;
    }

};

int main()
{
    Date D(3,11,2020);
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

/*
7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.

*/
#include<iostream>
using namespace std;
class Box
{
private:
    float Length,Breadth,Height,Volume;
public:

    Box(float length,float breadth,float height)
    {
        Length=length;
        Breadth=breadth;
        Height=height;
    }
    void volume()
    {
        Volume=Length*Breadth*Height;
    }
    void display()
    {
        cout<<"calculate volume of the box "<<endl;
        cout<<Volume<<" cubic cm"<<endl;
    }

};

int main()
{
    Box b(12,15,3);
    b.volume();
    b.display()    ;
    return 0;
}

/*
8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.

*/
#include<iostream>
using namespace std;
class Bank
{
private:
    float Principal,Year,SI;
    static int Roi;
public:

    Bank()
    {
        Principal=0;
        Roi=0;
        Year=0;
    }
    void read(float principal,float roi,float year)
    {
        Principal=principal;
        Roi=roi;
        Year=year;
    }
    int simpleinterest()
    {
        SI=(Principal*Roi*Year);
        return SI;
    }

};
int Bank::Roi=0;
int main()
{
    Bank b;
    b.read(2000.0,4.5f,6);
    cout<<"Simple Interest is "<<b.simpleinterest();
    return 0;
}

/*
9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.

*/
#include<iostream>
using namespace std;
class Bill
{
private:
    float UNIT,electricityBill;

public:
    void get(float unit)
    {
        UNIT=unit;
    }
    int calculateBill()
    {
        if(UNIT<100)
            electricityBill=UNIT*1.20;
        else if(UNIT>=100 && UNIT<200)
            electricityBill=100*1.20+(UNIT-100)*2;
        else
            electricityBill=100*3.20+(UNIT-200)*3;
        return electricityBill;
    }

};
int main()
{
    Bill cs1;
    cs1.get(250);
    cout<<"Electricity Bill Is "<<cs1.calculateBill();
    return 0;
}

/*
10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result
*/
#include<iostream>
using namespace std;
class StaticCount
{
private:
    static int cnt;
public:
    StaticCount()
    {
        cnt=0;
    }
    int inc_count()
    {
        cnt++;
    }
    void display()
    {
        cout<<"Increment "<<cnt<<" times."<<endl;
    }

};
int StaticCount::cnt;
int main()
{
    StaticCount s1,s2,s3;
    s1.inc_count();
    s2.inc_count();
    s3.inc_count();
    s1.display();

    return 0;
}
