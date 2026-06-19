#include<iostream>
using namespace std;
int main(){
    int a=12 , b=0;
    cout<<"Hi"<<endl;
    try{
        if(b==0){
            throw "you cannot divide number by 0 " ;
        }
        cout << "result is "<<a<<endl;
    }
    catch(const char *s){
        cout<<s<<endl;
    }
    return 0;
}


// Expectation Handling in c++ :
// It is a mechanisms used to handle runtime errors(error that occur during program execution ) in a controlled way
//  , so that the program doesnot crash abruptly .
// instead of stopping the programm we can catch the errpr and handle it properly.

// 1. try 
//          code that may cause an error is writting inside 
// 2. throw
//          used to throw an exeptionwhen an error occurs .
// 3. catch
//           used to catch and handle the exeption 


// advantages ;
// seperate error handling from normal code
// improve readability
// makes program robust
// avoids abnormal termination  
