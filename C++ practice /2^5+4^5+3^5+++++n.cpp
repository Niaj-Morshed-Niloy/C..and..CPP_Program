#include<iostream>
#include<cmath>      
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=2;i<=n;i=i+2)
    {
        
        sum=sum+pow(i,5);
    }
    cout<<"Total="<<sum;
    return 0;
}




