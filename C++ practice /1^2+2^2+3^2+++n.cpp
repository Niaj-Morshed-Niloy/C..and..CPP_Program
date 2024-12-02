#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i*i;
    }
    cout<<"Total="<<sum;
    return 0;
}



