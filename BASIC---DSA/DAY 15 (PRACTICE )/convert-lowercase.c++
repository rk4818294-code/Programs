#include<iostream>
using namespace std ;

int main(){
    string s;
    cout << "string number :";
     getline(cin , s);
     
     for(int i=0; i<s.length(); i++){
        s[i]+= 32 ;
     }
     cout << s << endl ;
}