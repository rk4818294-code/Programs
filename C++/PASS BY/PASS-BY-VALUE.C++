// #include<iostream>
// using namespace std;

// void abc (int a) {                                                      // pass by value
   
//         a=a+5;
//     cout<<"Inside function " <<a<<endl ;
// }            
//  int main (){
//     int a=7 ;
//     cout<<"value before function call "<< a << endl ;
//     abc(a);
//     cout<<"value after function call "<< a << endl ;
//     return 0;
//  }


  


#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "Inside Function:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before Swap:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swap(x, y);

    cout << "After Swap:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}