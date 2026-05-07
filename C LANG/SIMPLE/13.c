#include <stdio.h>
int main()
{
   int x1,y1,x2,y2,x3,y3;
   printf("enter the value of x1,y1");
   scanf("%d %d",&x1,&y1);
    printf("enter the value of x2,y2");
   scanf("%d %d",&x2,&y2);
    printf("enter the value of x3,y3");
   scanf("%d %d",&x3,&y3);
   int m1=(y2-y1)/(x2-x1);
   int m2=(y3-y2)/(x3-x2);
(m1==m2) ?printf("the line is satraight"):printf("the line is not straight") ;

}
