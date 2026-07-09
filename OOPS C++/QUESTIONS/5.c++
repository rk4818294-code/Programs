// write a programm to take total no. of heads and legs as input present in a poultery farm and you required to print total no. of hence and total no. of goats prezsent in that poultry farm

#include<iostream>
using namespace std;
int main(){
    int heads;
    cin>>heads ;
    int legs ; 
    cin >> legs  ;
    int goats = (legs - 2 * heads) / 2;
    int hens = heads - goats;

 cout<< "No.of hens = " <<hens << endl ;
  cout<< "No.of goats = "<<goats << endl ;
  return 0 ;

}