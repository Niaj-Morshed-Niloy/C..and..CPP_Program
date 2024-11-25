#include<iostream>
using namespace std;
class student{
public:
    int id;
    string name;
    float result;
};
int main(){
student s1;
s1.name="Niaj";
s1.id=201;
s1.result=3.46;
cout<<"Student id="<<s1.id<<endl<<"Student name="<<s1.name<<endl<<"Student result="<<s1.result;
return 0;
}
