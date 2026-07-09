#include<stdio.h>
void change(int *n){
    *n=7;
}
int main(){
    int n=6;
    change(&n);
    printf("%d",n);

}