// #include<iostream>
// using namespace std;




// int main(){
//     cout<<"hi"<<endl;
//     cout<<10/0<<endl;
//     cout<<"bye"<<endl;
// }

// exception handling in c++
//exception handling in c++ is a mechanism used to handle runtime errors(errors that execution during program execution) in a controlled way
//so that the program does not crash abruptly.
//instead of stopping the program , we can catch the error and handle it properly.

//basic keywords in exception handling:
//1- try: code that may cause an error is written inside this block.
//2- throw: used to throw an exception when an error occurs.
//3- catch: used to catch and handle the exception.

// advantages:
//separate error handling from normal code.
//improves readibility
//makes program robust
//avoids abnormal termination


//example:
// #include<iostream>
// using namespace std;

// int main(){
//     int a=12,b=0;
//     cout<<"hi"<<endl;

//     try{

//         if(b==0){
//             throw "you can not divide the number by 0";
//         }
//        cout<<"the result is"<<a/b<<endl;
//     }
//     catch( const char*s){
//         cout<<s<<endl;

//     }
//     cout<<"rest of line"<<endl;
// }

#include<iostream>
#include<fstream>
//creating file in c++
using namespace std;

int main(){
    ofstream file("C:\\Users\\GLA\\Documents\\Zoom\\data.txt");
    cout<<"file created successfully";

    file.close();
}