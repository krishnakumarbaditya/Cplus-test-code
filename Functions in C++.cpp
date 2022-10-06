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

