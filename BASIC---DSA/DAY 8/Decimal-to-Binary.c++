#include<iostream>
using namespace std; 
int main(){
    int num ;
    long long binary = 0 ;
    int place = 1 ;
    cout << "Enter decimal no. = ";
    cin >> num ;
    
    while(num > 0){
        int remainder = num % 2 ;
        binary = binary + (remainder * place);
        place = place * 10 ;
        num = num /2 ;
    }

    cout << " binary No. = "<< binary ;
    return 0 ;
}