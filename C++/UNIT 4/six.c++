// // Ques : write a c++ program to make two measurments units classes named kilomwter and meter ,
// now you are required to convert kilometer to meter by using class to class type conversion 
// hint : 1kilometer = 1000 meter 

// Ques :  write a c++ program to calculate atea of different shape by using run time polymorphism i.e  take
// a shape class as parent of rectangle , square , circle , and then call the area function using parents class pointer . 
//  Hint : use virtual function in parent class .


// Type converstion 
// Categgories of type conversion :

// 1- Basic type to Basic type :
// 2- Basic type to class type :
// 3- Class type to basic type :
// 4- class type to class type :


// #include<iostream>
// using namespace std;
//  class number{
//     int data;
//     public:
//     number(int d=0){
//         data = d;
//     }
//     void display(){
//         cout<<"value of data ="<< data ;
//     }
//  };
//  int main(){
//     number n1 ;
//     int a=25;
//     n1 = a ;                 // Basic to class type conversion 
//     n1.display();
//  }





//  #include<iostream>
//  using namespace std;
//   class number{
//     int data;
//     public:
//     number(int d=0){
//         data = d;
//     }
//      operator int(){                      // return type not required 
//         return data ;
//     }
//     void display(){
//         cout<<"value of data ="<< data ;
//     }
//  };
//  int main(){
//     number n1 (15) ;
//     int a;
//     a = n1 ;              //  Class  to basic type conversion 
//     cout<<a;
//  }




// #include<iostream>
//  using namespace std;
//   class number1{
//     int data;
//     public:
//       number1(int d=0){
//          data = d;
//      }
//   int getdata(){
//     return data;
//   }
//     void display(){
//         cout<<"value of data ="<< data ;
//     }
//  };
//  class number2{
//     int num;
//     public:
//     number2(){}
//       void operator=( number1 &n){                     
//        this ->num =  n.getdata();
//     }
//     void display(){
//         cout<<"value of data ="<< num <<endl ;
//     }
//  };
//  int main(){
//     number1 n1(16) ;
//     number2 n2;
//     n2 = n1;
//     n2.display();
   
//  }
