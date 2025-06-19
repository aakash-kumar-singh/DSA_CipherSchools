//Constructor is a member function which is called automatically when an object is created
//It will have same name as that of class
//It does not have a return type

#include<iostream>
using namespace std;
class Student{
  public:
  // Student(){ // default Constructor
  //   cout<<"Constructor Called";
  // }

  int age;
  Student(int i){ // parameterised Constructor
    this->age=i;
    cout<<age;
  }


};
int main(){
  Student s1(50);
}