//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
void prime(int);
int main()
{
    cout<<"check whether a given number is a Prime number or not."<<endl;
    cout<<"Enter a Number ";
    int no;
    cin>>no;
    prime(no);
    return 0;
}
void prime(int no)
{
    int i;
    for(i=2;i<no;i++)
    {
        if(no%i==0)
            break;
    }
    if(i==no)
        cout<<no<<" is a prime number";
    else
        cout<<no<<"is not a prime number";
}

//3. Define a function to calculate x raised to the power y.
#include<iostream>
#include<math.h>
using namespace std;
void power(int,int);
int main()
{
    int no,no1;
    cout<<"calculate x raised to the power y."<<endl;
    cout<<"Enter the value of X ";
    cin>>no;
    cout<<"Enter the value of Y ";
    cin>>no1;
    power(no,no1);
    return 0;
}
void power(int no,int no1)
{
    int i;
    cout<<no<<" raised to the power "<<no1<<" is "<<pow(no,no1);
}

//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
#include<math.h>
using namespace std;
int fib(int);
int perfectsquare(int);

int main()
{
    int no;
    cout<<"check whether a given number is a term in a Fibonacci series or not."<<endl;
    cout<<"Enter a number ";
    cin>>no;
    if(fib(no)==1)
        cout<<no<<" number is a term in a Fibonacci series.";
    else
        cout<<no<<" number is not a term in a Fibonacci series.";
    return 0;
}
int fib(int no)
{
    int res1,res2;
    res1=(5*pow(no,2)+4);
    res2=(5*pow(no,2)-4);
    if(perfectsquare(res1) || perfectsquare(res2))
        return 1;
    else
        return 0;

}
int perfectsquare(int no)
{
    int sqrt1;
    sqrt1=sqrt(no);
    if(pow(sqrt1,2)==no)
        return 1;
    else
        return 0;
}

//6. Define a function to swap data of two int variables using call by reference.
#include<iostream>
#include<math.h>
using namespace std;
void Swap(int &,int &);
int main()
{
    int no,no1;
    cout<<"swap data of two int variables using call by reference."<<endl;
    cout<<"Enter two number ";
    cin>>no>>no1;
    cout<<"Before swapping numbers are "<<no<<" and "<<no1<<endl;
    Swap(no,no1);
    cout<<"After swapping numbers are "<<no<<" and "<<no1;
    return 0;
}
void Swap(int &no,int &no1)
{
    int temp;
    temp=no;
    no=no1;
    no1=temp;
}

//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
#include<math.h>
using namespace std;
void add(int,int,int=0);
int main()
{
    int no,no1,no2;
    cout<<"using the default argument that is able to add 2 or 3 numbers."<<endl;
    cout<<"Enter three numbers ";
    cin>>no>>no1>>no2;
    add(no,no1,no2);
    add(no,no1);
    return 0;
}
void add(int no,int no1,int no2)
{
    int sum;
    sum=no+no1+no2;
    cout<<"Sum is "<<sum<<endl;
}

//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include<iostream>
#include<math.h>
using namespace std;
float area(float);
int area();
float area(int,int);
int main()
{
    int height,base;
    cout<<"calculate area of circle, area of rectangle and area of triangle."<<endl;
    float radius;
    cout<<"enter the radius of the circle ";
    cin>>radius;
    cout<<"area of the circle is "<<area(radius)<<endl;

    int ar=area();
    cout<<"area of the rectangle is "<<ar<<endl;

    cout<<"Enter the height and base of triangle "<<endl;
    cin>>height>>base;
    cout<<"area of the triangle is "<<area(height,base);
    return 0;
}
float area(float r)
{
    return 3.14*pow(r,2);
}
int area()
{
    int length,breadth;
    cout<<"Enter the length and breadth of rectangle "<<endl;
    cin>>length>>breadth;
    return length*breadth;
}
float area(int h,int b)
{
    return (h*b)/2.0;
}

//9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
#include<math.h>
using namespace std;
void maxm();
void maxm(int,float);
int main()
{
    int no;
    float no1;
    cout<<"using function overloading to find a maximum of two numbers and both the numbers can be integer or real."<<endl;
    maxm();
    cout<<"Enter two numbers "<<endl;
    cin>>no>>no1;

    maxm(no,no1);
    return 0;
}
void maxm()
{
    int no;
    float no1;
    cout<<"Enter two numbers "<<endl;
    cin>>no>>no1;
    if(no>no1)
        cout<<no<<" is greater than "<<no1<<"."<<endl;
    else
        cout<<no1<<" is greater than "<<no<<"."<<endl;
}
void maxm(int no,float no1)
{
    if(no>no1)
        cout<<no<<" is greater than "<<no1<<"."<<endl;
    else
        cout<<no1<<" is greater than "<<no<<"."<<endl;
}

//10. Write functions using function overloading to add two numbers having different data types
#include<iostream>
#include<math.h>
using namespace std;
void add();
void add(int,float);
int main()
{
    int no;
    float no1;
    cout<<"using function overloading to add two numbers having different data types"<<endl;
    add();
    cout<<"Enter two numbers "<<endl;
    cin>>no>>no1;

    add(no,no1);
    return 0;
}
void add()
{
    double no,add1;
    float no1;
    cout<<"Enter two numbers "<<endl;
    cin>>no>>no1;
    add1=no+no1;
    cout<<"addition of two numbers are "<<add1<<endl;
}
void add(int no,float no1)
{
    float add1;
    add1=no+no1;
    cout<<"addition of two numbers are "<<add1;
}
