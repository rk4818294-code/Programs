#include<iostream>
using namespace std ;
int main(){

    int x = 10 ;
    int *p1 ;            // pointer 
    int **p2;           //  pointer to pointer
    p1 = &x ;
    p2 = &p1;
    cout << " x = "<< x << endl ;

    cout << " p1 = " << p1 << endl ;
    cout << " *p1 = "<< *p1 << endl ; 

    cout << " p2 = " << p2 << endl ;
    cout << " *p2 = "<< *p2 << endl ; 

    cout << " **p2 = " << **p2 << endl ;
    cout << " &p2 = "<< &p2 << endl ; 

}


