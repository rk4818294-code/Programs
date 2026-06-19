// this pointer : pointer that automatically stores the memory address of member
// function's calling object
// it allows the function to access its own member function and objects


#include <iostream>
#include <string>
using namespace std;

class Student {
 private:
  int roll;
  string name;

 public:
  void set(int roll, string name) {
    this->roll = roll;
    this->name = name;
  }
  void display() {
     cout << roll << ": " << name << endl;
     }
};

int main() {
  Student s1, s2;
  s1.set(1, "ravi");
  s2.set(1, "abhay");

  s1.display();
  s2.display();

  return 0;
}






// constructors will always be public

// constructors are of 4 types:
// 1 - default constructor - which does not take any argument
//                           every class has inbuilt default constructor, but if we want to do something
//                           in default constructor, we are required to make our own

// 2 - parameterized constructor
// 3 - copy constructor
// 4 - move constructor