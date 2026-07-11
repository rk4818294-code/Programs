#include<iostream>
using namespace std ;
int countVowels( string str , int i){
    int c =0 ;
    for(int i=0 ; i<str.length(); i++){

    if( str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'A' ||str[i] == 'E' ||
        str[i] == 'I' ||str[i] == 'O' || str[i] == 'U'  ){
              c++ ;
        }
        else {}
    }
        return c ;
}


int main(){
    string str ;
    cout<<" Enter string : " ;
    getline(cin , str);

    
    cout<< "count vowels : " << countVowels(str, 0)<< endl ;
    
}