//1. Write a C++ program to print Hello MySirG on the screen.

#include<iostream>
using namespace std;
int main()
{
    cout<<"MySirG";
}

//2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl;
    cout<<"MySirG";
}

//3. Write a C++ program to calculate the sum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"Sum of two number is "<<a+b;
}

//4. Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;
int main()
{
    int r,area;
    cout<<"Enter the radius of the circle ";
    cin>>r;
    area=3.14*r*r;
    cout<<"Area of the circle is "<<area<<".";
}

//5. Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
    int length,width,height,vol;
    cout<<"Enter the length of a cuboid ";
    cin>>length;
    cout<<"Enter the width of a cuboid ";
    cin>>width;
    cout<<"Enter the height of a cuboid ";
    cin>>height;
    vol=length*width*height;
    cout<<"Volume of a cuboid is "<<vol<<".";
}

//6. Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main()
{
    int no1,no2,no3,avg;
    cout<<"calculate an average of 3 numbers."<<endl;
    cout<<"Enter the number1 ";
    cin>>no1;
    cout<<"Enter the number2 ";
    cin>>no2;
    cout<<"Enter the number3 ";
    cin>>no3;
    avg=(no1+no2+no3)/3;
    cout<<"Average of 3 numbers is "<<avg<<".";
}

//7. Write a C++ program to calculate the square of a number

#include<iostream>
using namespace std;
int main()
{
    int no,sq;
    cout<<"calculate the square of a numbers."<<endl;
    cout<<"Enter the number ";
    cin>>no;
    sq=no*no;
    cout<<"Square of number "<<no<<" is "<<sq<<".";
}

//8. Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;
int main()
{
    int no,no1;
    cout<<"swap values of two int variables without using third variable."<<endl;
    cout<<"Enter two numbers ";
    cin>>no>>no1;
    cout<<"Before swapping the variable."<<endl;
    cout<<"Number1 is "<<no<<endl;
    cout<<"Number2 is "<<no1<<endl;
    no=no+no1;
    no1=no-no1;
    no=no-no1;
    cout<<"After swapping the variable"<<endl;
    cout<<"Number1 is "<<no<<endl;
    cout<<"Number2 is "<<no1<<endl;
}

//9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int no,no1;
    cout<<"Find the maximum of two numbers."<<endl;
    cout<<"Enter two numbers ";
    cin>>no>>no1;
    if(no>no1)
        cout<<no<<" is greater.";
    else
        cout<<no1<<" is greater.";
}

//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0,i;
    cout<<"Add all the numbers of an array of size 10."<<endl;
    cout<<"Enter 10 elements in the array."<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of all the numbers in the array is "<<sum<<".";
}
