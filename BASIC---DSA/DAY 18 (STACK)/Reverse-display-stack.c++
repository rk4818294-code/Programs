#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int> s;
    int n;
    cout<<"enter the number of elements to insert in stack: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter element "<<i+1<<": ";
        cin>>x;
        s.push(x);
    }
    cout<<"elements in stack in reverse order: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}