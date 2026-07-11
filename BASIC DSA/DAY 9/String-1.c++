#include<iostream>
using namespace std ;
int main(){
  char st[100];
  scanf("%[^\n]", st);
  int c=0 ;
  for (int i=0 ; st[i]!= '\0';i++){
    c++ ;
  }
  printf("lenght of string %s is %d " , st , c);
}

// #include<iostream>
// using namespace std ;
// int main()
// {
//     char st[100];
//     scanf("%[^\n]",st);
//     int i=0;
//     while(st[i]!='\0'){
//     i++;
// }
// printf("Length of String: %s is -> %d",i,st);
// return 0;
// }

//---------------------------------------------------------------------------------

//  write a programe to take a string from user and then count the no. of allphabet , 
//  uppercase , lowercase, special character no. of spaces in that string  


