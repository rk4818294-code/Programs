#include<iostream>
using namespace std ;

void printChars(string str , int i){
    if(i== str.length())
    return ;
    cout<<str[i]<< " ";
    printChars(str, i+1);
}

int main(){
    string str ;
    cout<< " Enter string : " ;
    getline(cin , str);

    printChars(str,0);
}