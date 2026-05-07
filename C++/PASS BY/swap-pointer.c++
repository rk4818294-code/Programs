#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int *temp;
    *temp= *a;
    *a= *b;
    *b= *temp;
}

int main()
{
    int a=2,b=4;
    swap(&a,&b);
    cout<<"the vale of a is :"<<a<<endl;
    cout<<"the value of b is : "<<b;
    return 0;
}