// count words 
#include<iostream>                                                                            // A=65    z= 91
using namespace std ;                                                                        // a=97    z= 122
int main(){
    string s;int c=0;
    cout<< " Enter string : " ;
    getline(cin , s);
    for(char ch: s){
        if( ch != ' '  )
         {
               c++ ;
        }
    }
           cout << "count  words : "  << c << endl ;
}