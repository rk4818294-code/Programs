#include<iostream>
using namespace std ;

int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin ,s);
    int digits = 0 , alphabets =0 , special =0;
    for(int i=0 ; i<=s.length(); i++){
        if(s[i]>'a' && s[i]<'z' || s[i]>'A' && s[i]<'Z' ){

             alphabets++ ;
            
        }

        else if ( s[i]>='0' && s[i] <= '9'){
           digits ++ ;
         
        }
        else{

            special ++ ;
           
        }
       
    }
        cout <<" digits : " <<digits <<endl ;
        cout << " alphabets : "<< alphabets <<endl ;
        cout<<"special character : "<< special <<endl ;
    
}