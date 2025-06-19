#include<iostream>
using namespace std;
class Student{
  public:
  int id;
  string name;
  int age;

  void getAge(){
    cout<<age<<endl;
  }

 
  
};
int main(){
 Student a;
 Student b;
 a.id=1;
 a.name="Aakash";
 a.age=21;
 cout<<a.id<<" "<<a.name<<" "<<a.age<<endl;
 a.getAge();

 b.id=2;
 b.name="Aditya";
 b.age=16;




}