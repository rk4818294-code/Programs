#include<iostream>
using namespace std;
int main (){
    int x , Amount; 
    cout << "Enter the value of units : ";                                                // Units     |    Rate                       
    cin>> x;                                                                              // 0-100      |    5 rupee per unit
   if (x>0 && x<=100){                                                                    // 101-200    |    7 rupee per unit
        Amount = x*5 ;                                                                    // 201-300    |    10 rupee per unit
   }                                                                                      // above 300  |    15 rupee per unit
    else if (x>101 && x<=200){
         Amount =  5*100 +(x-100)*7 ;
      }
    else if (x>201 && x<=300){
         Amount =  5*100 + 100*7+(x-200)*10 ;
       }
    else if (x>300){
        Amount =   5*100 + 7*100 +10*100 +(x-300)*15 ;
       }
    else {
        cout << " No Electricity bill " << endl;
    }
    cout<< " Total Electricity bill = : " << Amount << endl;

    return 0 ;
}

