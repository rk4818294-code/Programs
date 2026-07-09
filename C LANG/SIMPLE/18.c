#include <stdio.h>
int main(){
    int x ;
    scanf("%d",&x);
    if(x>=91 && x<=100){
    printf("a");
}
    else if(x>=81 && x<=90){
        printf("b");
}
    else if(x>=71 && x<=80){
        printf("c");
}
    else if(x>=61 && x<=70){
        printf("d");
}
    else if(x>=51 && x<=60){
        printf("e");
}
    else if(x>=41 && x<=50){
        printf("f");
}
    else if(x<=40 && x>=0){
        printf("fail");
}
}