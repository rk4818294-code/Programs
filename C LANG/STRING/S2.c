#include<stdio.h>
int main(){
    // ascii value A-Z =65-91
    // ascii value a-z =97-122
  char str[100];
  fgets (str,100,stdin);
  for (int i=0;str[i]!='\0';i++){
    if (str [i]>='A'&& str[i]<='Z'){
        str[i]=str[i]-32;
        printf("%c",str[i]);
    }
  }
}