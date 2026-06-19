// dynamic destructor :
// whenever we delete dynamic memeory within the destructor ,then that 
// destructor is known as dynamic destructor
 

#include<iostream>
 using namespace std;

class person{
    int *age;
    string *name;
    public:
    person(string n,int a){
        age=new int(a);
        name=new string(n);
    }
    ~ person(){
        delete age ;
        delete name ;
        cout<<"destructor called";
    }
};
int main(){
    person p1("abc",25);
    return 0;
}

