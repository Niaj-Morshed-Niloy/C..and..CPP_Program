#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Take any year:";
    cin>>year;
    
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not leap year";
    }
    return 0;
}