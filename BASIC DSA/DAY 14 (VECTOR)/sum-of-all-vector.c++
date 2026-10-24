// sum of all element in vector 

#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int> v;
    int n;
    for(int i=0;i<10;i++){
        cin>>n;
        v.push_back(n);
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<"sum of all element in vector:"<<sum;
}