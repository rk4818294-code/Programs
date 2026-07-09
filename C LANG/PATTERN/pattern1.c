#include <stdio.h>
int main(){
    int m ,n;
    printf("enter the row and column: ");
    scanf("%d%d",&m,&n);
    for( int i=0; i<m; i++){
        for (int j=0;j<n; j++){
        
    if(i==2 && j==2){
        printf( "  " );
    }
    else{
        printf("* ");
    }
}
    printf("\n");
    }
    
}