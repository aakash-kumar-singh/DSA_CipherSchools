#include <iostream>
using namespace std;
class Student {
    string name;
    int id;
public:
    Student() {
        name = "Aakash";
        id = 1;
    }
    void getDetails() {
        cout << name << " " << id << endl;
    }
};
int main() {
    Student s1;
    s1.getDetails(); 
    return 0;
}
