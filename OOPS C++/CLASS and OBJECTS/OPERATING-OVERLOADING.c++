// operator overloading : operator overloading in c++ is a type of compile-time polymorphism that allows you to redefining or "overloading "
//                         the behavior of most built in operators (like +,-,*,==,/,++,--) for user-defined types such as classes and structure 

// Example of operator overloading using unery operator

#include <iostream>
using namespace std ;
class Employee{
public:
int id;
string name ;
int salary ;

Employee(int id ,string name, int salary){
    this -> id=id;
    this -> name=name;
    this -> salary= salary ;
}
void display(){
    cout <<"id is :"<< id<< endl;
     cout <<"Nameis :"<< name<< endl;
   cout <<"salary is :"<< salary<< endl;
  }
void operator++(){
    salary++;
}
void operator--(){
    salary--;
}
};
int main(){
    Employee e1(101,"smith",1200);
     Employee e2(202,"amit",7800);
     e1.display();
     e2.display ();
     ++e1;
     --e2;
     e1.display();
     e2.display ();


}

