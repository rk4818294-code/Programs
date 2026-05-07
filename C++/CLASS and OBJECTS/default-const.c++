#include<iostream>
using namespace std;
class car{
    int year;
    string name;
    public:
    car(){
        year=0;
        name="";
         cout<<"object created with default"<<endl;
    }
    car(int year,string name){
        this-> name=name;
        this-> year=year;
        cout<<"object created with "<< name <<endl;
    }
    ~car(){
        cout<<"destructor called " << name <<endl;
    }
};
int main(){
    car c1(2000,"hyundai"),c(1990,"maruti");
    return 0;
}