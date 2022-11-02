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
    return 0;
}

/*
2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
*/
#include<iostream>
using namespace std;
class Time
{
private:
    int hr,m,s;
public:
    void settime(int h,int mn,int sec)
    {
        hr=h;
        m=mn;
        s=sec;
    }
    void print()
    {
        cout<<"Display values of time."<<endl;
        cout<<hr<<" hr "<<m<<" min "<<s<<" sec";
    }
};
int main()
{
    Time t1;
    t1.settime(3,45,20);
    t1.print();
}

/*
3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.

*/
#include<iostream>
using namespace std;
class Factorial
{
private:
    int fact=1;
public:
    void factorial(int no)
    {
        int i;
        for(i=1;i<=no;i++)
        {
            fact=fact*i;
        }
        cout<<"Factorial of "<<no<<" is "<<endl;
        cout<<fact;
    }
};
int main()
{
    Factorial f1;
    f1.factorial(5);
}

/*
4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.
*/
#include<iostream>
using namespace std;
class Largest
{

public:
    void largest(int no1,int no2,int no3)
    {
        if(no1>no2)
        {
            if(no1>no3)
                cout<<no1<<" is greater.";
            else
                cout<<no3<<" is greater.";
        }
        else if(no2>no3)
            cout<<no2<<" is greater.";
        else
            cout<<no3<<" is greater.";
    }
};
int main()
{
    Largest l1;
    l1.largest(5 , 4 , 2);
}

/*
5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.

*/
#include<iostream>
using namespace std;
class ReverseNumber
{
private:
    int revs=0,rem;
public:
    void rev(int no)
    {
        int no1=no;
        while(no1)
        {
            rem=no1%10;
            revs=(revs*10)+rem;
            no1=no1/10;
        }
        cout<<"Reverse of "<<no<<" is"<<endl;
        cout<<revs;
    }
};
int main()
{
    ReverseNumber r;
    r.rev(542);
}

/*
6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.

*/
#include<iostream>
using namespace std;
class Square
{
private:
    int sqr,count=0;
public:
    void square(int no)
    {
        sqr=no*no;
        count++;
        cout<<"Square of "<<no<<" is "<<sqr<<"."<<endl;
        cout<<"Square function call "<<count<<" times."<<endl;
    }

};
int main()
{
    Square sq;
    sq.square(5);
    sq.square(8);
    sq.square(4);
}

/*
8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.
*/
#include<iostream>
using namespace std;
class Rectangle
{
private:
    int ar;
public:
    void area(int l,int b)
    {
        ar=l*b;
        cout<<"Area of rectangle is "<<ar;
    }

};
int main()
{
    Rectangle r;
    r.area(4,5);
}

/*
9. Define a class Circle and define an instance member function to find the area of the
circle.
*/
#include<iostream>
using namespace std;
class Circle
{
private:
    int ar;
public:
    void area(int r)
    {
        ar=3.14*r*r;
        cout<<"Area of Circle is "<<ar;
    }

};
int main()
{
    Circle c;
    c.area(4);
}

/*
10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.
*/
#include<iostream>
using namespace std;

class Area
{
private:
    int ar;
public:
    void area(int l,int b)
    {
        ar=l*b;
        cout<<"Area of Rectangle is "<<ar<<endl;
    }
    void area(int r)
    {
        ar=3.14*r*r;
        cout<<"Area of Circle is "<<ar<<endl;
    }
    void area(int sq,int a,int b)
    {
        ar=sq*sq;
        cout<<"Area of Square is "<<ar;
    }

};
int main()
{
    Area a;
    a.area(4,5);
    a.area(4);
    a.area(4,0,0);
}
