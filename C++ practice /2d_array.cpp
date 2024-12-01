#include<iostream>
using namespace std;
int main()
{
    int a[2][3],row,col;
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            cout<<"a["<<row<<"]["<<col<<"]=";
            cin>>a[row][col];
        }

    }
    cout<<a[row][col]<<endl;
    return 0;
}
