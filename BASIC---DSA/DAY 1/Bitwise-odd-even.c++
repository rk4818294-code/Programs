#include<iostream>
using namespace std;
int main (){
    int x=27;
    cout <<"x: "<< x << endl;
    if (x&1 == 1 ){
        cout<<"odd"<<endl;
    }
    else if (x&1 == 0){
         cout<<"even"<<endl;
    }
    else{
          cout<<"invalid"<<endl; 
    }
  
}