#include<iostream>
using namespace std;
int main(){                                                        // Xor = based on truth table
    int x=12;                                                      //     x               y                 x^y
    int y=10;                                                      //     1               1                  0
    int z= x^y;                                                    //     0               1                  1
    cout<<"z= "<<z<<endl;                                          //     1               0                  1
    return 0;                                                      //     0               0                  0
}
