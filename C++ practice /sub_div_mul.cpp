#include<iostream>
#include<iomanip>        
using namespace std;
int main()
{
    int x=50,z=15;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(4);
    float sub=x-z;
    cout<<setw(25)<<"substraction is="<<sub<<endl;
   
    float add=x+z;
    cout<<setw(25)<<"additonal is="<<add<<endl;
    float div=(float)x/z;             \
    cout<<setw(25)<<"division is="<<div<<endl;
    float mul=x*z;
    cout<<setw(25)<<"multiplication is="<<mul<<endl;
    return 0;
}
