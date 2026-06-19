#include<iostream>
#include <fstream>
using namespace std;
// create a File In C++
int main(){
    ofstream file ("Data.text");
    cout<<"file created successfully" ;
    file.close();
}
