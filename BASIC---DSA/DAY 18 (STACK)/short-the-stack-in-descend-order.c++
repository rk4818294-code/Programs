// short the stack in desending order 
#include<iostream>
using namespace std;

class stack{

    public:
    int arr[100];
    int top;
    stack(){
        top=-1;
    }
    void push(int x){
        if(top==99){
            cout<<"stack overflow"<<endl;
            return;
        }
        arr[++top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        top--;
    }
    bool isEmpty(){
        return (top==-1);
    }
    void display(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack s;
    int n;
    cout<<"enter the number of elements to insert in stack: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter element "<<i+1<<": ";
        cin>>x;
        s.push(x);
    }
    cout<<"elements in stack: ";
    s.display();
    
    // sort the stack in descending order
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s.arr[j]<s.arr[j+1]){
                swap(s.arr[j],s.arr[j+1]);
            }
        }
    }
    cout<<"elements in stack after sorting in descending order: ";
    s.display();
    return 0;
}