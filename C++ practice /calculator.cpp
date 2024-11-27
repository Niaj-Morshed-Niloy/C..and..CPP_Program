#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    char operation;
    cin>>operation;
    cin>>num1>>num2;

    switch(operation)
    {
    case'+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
    case'-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
    case'*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
    case'/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;

    }
    return 0;
}

