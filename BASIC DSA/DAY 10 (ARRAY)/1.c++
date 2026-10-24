#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={5,4,-1,7,8} ;
    
    for(int start=0; start<arr.size(); start++){
        for(int end=start; end<arr.size(); end++){
            for(int k=start; k<<end; k++){
                cout<< arr[k] << " ";
            }
            cout<<endl;
        }
    } 
}