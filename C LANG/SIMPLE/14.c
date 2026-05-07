#include<stdio.h>
int main () {
	int a=2,b=4, c= -1,d=-4,e=3 ;
	if(a>=b && a>=c && a>=d && a>=e){
		printf("%d",a);
	}
	else if(b>=a && b>=c && b>=d && b>=e){
		printf("%d",b);
		}
		else if(c>=b && c>=a && c>=d && c>=e){
		printf("%d",c);
		}
		 else if(d>=b && d>=c && d>=a && d>=e){
		printf("%d",d);
		}
		 else if(e>=b && e>=c && e>=d && e>=a){
		printf("%d",e);
		}

	
	return 0;
}

	