#include<iostream>
using namespace std;
class Rectangle{
public:
    int width,height;
    void area(){
    cout<<"Area of rectangle is:"<<width*height<<endl;
    }
  };
 int main(){
    Rectangle rect;
    rect.width=5;
    rect.height=10;
    rect.area();
    return 0;
 }
