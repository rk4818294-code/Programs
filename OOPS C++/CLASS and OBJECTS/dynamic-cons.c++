// #include<iostream>
// using namespace std;

// In c++, we can allocate memory dynamically at run time using new operator (keyword)
// which will get allocated in heap memory.
// new operator return the address of dynamically allocated heap memory.

// int main(){
//     int a; // normal variable got space in stack memory.
//     int *p= new int();
//     int *p1= new int(5);
//     string *pp= new string();
//     string *p2= new string("hello");
//     cout<<*p<<endl;
//     cout<<*p1<<endl;
//     cout<<*pp<<endl;
//     cout<<*p2<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int*fun(){
//     int *a=new int(5);
//     delete a;
//     return a;
// }
// int main(){
//     int *p=fun();
//     cout<<*p;
//     return 0;
// }


// Shallow copy - Whenever we make changes in one variable the changes got automatically got applied to copied variable
//or vice versa    
// Deep Copy - Wjenever we make changes to one variable, the changes doesn't applied to copied variable or vice versa

// #include<iostream>
// using namespace std;

// int main(){
//     int *a=new int(5);
//     int *b=a; // shallow copy
//     cout<<*a<<endl<<*b<<endl;
//     *b=10;
//     cout<<*a<<endl<<*b;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int *a=new int(5);
//     int *b=new int(); // new memory location to make deep copy 
//     *b=*a; //copy only value
//     cout<<*a<<endl<<*b<<endl;
//     *b=10;
//     cout<<*a<<endl<<*b;
//     return 0;
// }

//Dynamic Constructor
//the constructor in which dynamic memory is allocated is know as dynamic constructor

// #include<iostream>
// using namespace std;

// class person{
//     int *roll;
//     string *name;
//     public:
//     person(){
//         roll = new int(0);
//         name = new string("");
//     }
//     person(int r, string s){
//         roll = new int(r);
//         name = new string(s);
//     }
//     void display(){
//         cout<<*roll<<": "<<*name<<endl;
//     }
// };
// int main(){
//     person p1,p2(1,"ram"),p3(2,"shyam");
//     p1.display();
//     p2.display();
//     p3.display();
//     return 0;
// }



// friend function :
// 1- using this we can make any function as a friend of any class ,so that it can access private members of that class .
// 2- function can be two scanaries :
// a:- global function - function which are not a memeber of any class are known as global function 
// b:- member function - function which are member of any class are known as member function 



#include<iostream>
using namespace std;
class person;
class student{
    public:
    void display (person &p);
    void changeage(person &p);
};
class person{
    private:
    int age ;
    public:
    person(int a){
        age=a;
    }
    friend void student ::display(person &p) ;
    friend void student ::changeage(person &p) ;
};
void student :: display(person &p){
    cout<<p.age <<endl;
}
void student :: changeage (person &p){
    p.age=p.age+5;
}

int main(){
    person p1(25), p2(45);
    student s1;
    s1.display (p1);
    s1.changeage(p1);
    s1.display(p1);
}