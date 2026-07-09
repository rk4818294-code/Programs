// type conversion:
//categories of type conversion
//1- basic type to basic type:
//2- basic type to class type
//3- class type to basic type
//4- class type to class type

//basic to basic type conversion

// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     char c;
//     a =100;
//     c = a;//ASCII value: a=97 and z=122, A = 65 and z=90, '0'=48 and '9' =57
//     cout<<c<<endl;
//     char ch=' ';
//     a=ch;
//     cout<< a;
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=7;
//     int b=2;
//     float c;
//     c = (float)a/b;
//     cout<<c;
//     return 0;
// }

//basic type to class type:

// #include<iostream>
// using namespace std;
   
// class number{
//     int data;
//     public:
//     number(int d=0){
//         data = d;
//     }
//     void display(){
//         cout<<"value of data="<<data;
//     }
// };  

// int main(){
//     number n1;
//     int a= 25;
//     n1=a;                                 //basic to class type conversion
//     n1.display();
// }

//class type to basic type:
// we will use casting operator function


// #include<iostream>
// using namespace std;
// class number{
//     int data;
//     public:
//     number(int d=0){
//         data = d;
//     }

//     operator int(){
//         return data;
//     }
//     void display(){
//         cout<<"value of data="<<data;
//     }
// };  

// int main(){
//     number n1;
//     int a= 25;
//     n1=a;                                 //basic to class type conversion
//     n1.display();
// }

#include<iostream>
using namespace std;
class number1{
    int data;
    public:
    number1(int d=0){
        data = d;
    }
    int getdata(){
        return data;
    }
    void display(){
        cout<<"value of data="<<data<<endl;
    }
    
};  
class number2{
    int num;
    public:
    number2(){

    }
    void operator=(number1 &n){
        this->num=n.getdata();
    }
    void display(){
        cout<<"value of num"<<num<<endl;
    }
};

//write a c++ program to make two measurement units clases named kilometer and meter. now you are required to convert kilometer
//by meter using class to class tyoe conversion
//hint: 1 kilometer = 1000 meter

// write a c++ program to calculate area of different shapes by using runtime polymorphism i.e take a shape class as parent
//class of rectangle, square ,circlenand then call the area function using parent class pointer.
//hint: use virtual function in parent class.
