// convert string to lowercase
// ascii value A-Z =65-91
// ascii value a-z =97-122

#include<iostream>
using namespace std ;

int main(){
     string s;
     cout<< "String = " ;
     getline(cin , s);
    for(int i=0 ; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
         s[i] = s[i]+32;
        }
       
    }
      cout<< s << endl ;
}