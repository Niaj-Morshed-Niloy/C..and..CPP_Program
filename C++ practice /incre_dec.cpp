#include<iostream>
using namespace std;
int main()
{
    int x=5,y=2;
    y=++x;
    cout<<y<<endl;
    x=--y;
    cout<<x<<endl;
    x=--y;
    cout<<x<<endl;
    y=++x;
    cout<<y;
    return 0;
}
