#include <stdio.h>
int main()
{
    
    for( int i=1; i<=4; i++){
        for (int j=1;j<=4; j++){
        
    if((i==2 && j==2) || ( i==3 && j==4)){
        printf( "  " );
    }
    else{
        printf("* ");
    }
}
    printf("\n");
    }
    
}