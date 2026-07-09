// FRIEND FUNCTION :
//                   A friend function is a function that is not a member of a class but can access the private and protected members of that class.

// EXAMPLE:
#include<iostream>
using namespace std;
class A{
    private:
    int x;
    protected:
    int y;
    public:
    
    A(){
          x=5;
          y=10;
    }
    void show(){
        cout<<"x="<<x<<endl;
          cout<<"y="<<y<<endl;
    }

   friend void display(A &obj);
};
 void display(A &obj){
        cout<< "non member function called "<<endl;
        cout<<"x="<<obj.x<<endl;
        cout<<"y="<<obj.y<<endl;
    }
int main(){
    A obj;
    display(obj);
}