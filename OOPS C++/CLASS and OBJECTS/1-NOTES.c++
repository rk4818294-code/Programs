// PROCEDUR ORIENTED PROGRAMMING : is a  programming ehich is derived from structure programm in this type og programming there is series of  
//                                 computational and its depends on calling function 
// A function can be called at any point , by other function , by itself .
// Example : C , COBOL, FORTRAN, etc


// Object Oriented Programming( OOP)  : a programming parading which is based on objects which act as a real world entity
//                                      it contains data in the form attributes and working in the form of method (function)
// Example : c++ , python , java etc.


// problem solving approch 
//  Top-Down Approach :  in top down approach  we divide bigger into sub problems(functions) and than implement that function  step by step
//                       it is function centring
//                       it is easier for simple problems but difficult to handel for large system
// Example : c


//  Bottom -up Approach : in bottom-up approach  we identify the object first 
//                        build smaller components
//                        integerate them to form a  complete solution
//                        it is object centring and  better for larger system 
// Example : c++




// Classes and Objects :
// Class is a  user- defined datatype
// class acts as a blueprint for real world entity i.e object


// Class Syntax :
    class classmate{
//                       data members          (variable)     
//                       members functions     (functions) 
} ;
//  making class does not locate variable space and memory 
// space and memory will be located when object is created 



// Object Syntax:  When ever we are not using any access specifier than call member of class are private means they can not be access outside class 
//                 to access them outside we need to make them public 
// Note :" each and every object will have its seperate copy of data members in memory while member function are shared by every object" .

// classname objectname ;
// syntax:

  //   #include<iostream>
  // using namespace std;
  // class test{                // class defination 
  //  public:
  //  void show(){
  //   cout<<"hello world"<<endl ;
  //  }
  // };
  // int main(){
  //      test ob;
  //      ob.show();
  //     return 0;

  // }


// Example :

  // #include<iostream>
  // using namespace std;
  // class student{                // class defination 
  //   public:
  //  string name ;
  //  int roll ;
  //  void display(){
  //   cout<<roll<<":"<<name<<endl ;
  //  }
  // };
  // int main(){
  //      student s1,s2;            // object creation
  //      s1.name="ABHAY";
  //      s1.roll=2;
  //      s2.name="sarangi";
  //      s2.roll=5 ;
  //      s1.display();
  //      s2.display();
  //     return 0;

  // }




  // Dynamic memory allocation :
  // whenever we are allocation memory at run-time ,then this process is known as dynamic memory allocation
  // There are two types of memory :
  // A-stack memory :  1. whenever we declare any variable ,it get stored in stack memory at compile time .
  //                   2. the variable allocated in stack memory are automatically destroyed when they get out of scope .

  // B-heap memory :   1.whenever we declare any variable using dynamic memory allocation ,then that variable get stored in heap memory at run time.
  //                   2. the variable allocated



  

// constant data members :

// 1- constant data members are members which can not be changed after inilization .
// 2- wach objects will have seperate copy of constants data members.
// 3- constant data members can only be inilialized by using constructor initializer list

#include<iostream>
using namespace std;
class student{
const int roll ;
public:
student(int r ) :roll(r)   {
 // roll= r; // dont use this in constant data members use this    " student(int r ) :roll(r){}"

}
void display (){ 
  cout<< roll;
}
};
int main(){
  student s1(101);
  s1.display();
  return 0;
}




// friend class:
// 1- if we want to access private members of any class within another class , then we can make it is friend.
// 2- in above example , student class is friend of person class,
//    so ,student class can acess private members of class .
// 3- in this example ,student class is friend of person class,that doesnt mean that person class will also be freind of student class.
