#include<stdio.h>
int main(){
    int n,sum=0; 
    printf("number of digit");
    scanf("%d",&n);
   while(n!=0){
       int r =   n%10;
       sum=sum+r;
        n=n/10;
}
printf("%d",sum);

}