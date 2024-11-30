#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=20;i>10;--i)
    {
        if(i==15)
        {
        continue;
        }
        cout<<i<<endl;
    }
    return 0;

}


