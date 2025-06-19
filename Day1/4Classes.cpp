#include<iostream>
using namespace std;
class Box{
  public:
  int l;
  int b;
  int h;
  void calculateArea(){
    cout<<"Area is : "<<2*(l*b +l*h + b*h)<<endl;
  }
  void calculateVolume(){
    cout<<"Volume is : "<<l*b*h<<endl;
  }
};
int main(){
  Box b1;
  b1.l=10;
  b1.b=20;
  b1.h=30;
  cout<<"For Box1"<<endl;
  b1.calculateArea();
  b1.calculateVolume();

  Box b2;
  b2.l=40;
  b2.b=20;
  b2.h=10;
  cout<<"For Box2"<<endl;
  b2.calculateArea();
  b2.calculateVolume();


}