#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

for (int i=1;i<n;i++){
         scanf("%d",&arr[i]);
}
        int formu= n*(n+1)/2;
        int arrsum = 0;
for (int i=1;i<n;i++){
    arrsum = arrsum + arr[i];
}
     int answer =  formu - arrsum;
     printf("%d", answer);
}