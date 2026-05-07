#include <stdio.h>
int main()
{
    int num=0;
    for( int i=1; i<=7; i++){
        for (int j=1;j<=i; j++){
        
    if(i%2!=0){
        printf( " * " );
    }
    else{
        printf(" %d ",i);
    }
}
    printf("\n");
    }
    
}