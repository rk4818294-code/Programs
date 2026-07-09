#include<iostream>
using namespace std ;

bool ispalindrone(string str , int start , int end){
    if(start>=end)   return true ;
    if(str[start] != str[end])  return false ;

    return ispalindrone(str , start+1 , end-1);
        
    
}

int main(){
    string str ;
    cout<<"Enter string :" ;
    getline(cin , str);

    if(ispalindrone(str , 0, str.length()-1)){
        cout <<"palindrone " ;
    }
    else{
        cout<<"not palindrone" ;
    }
}