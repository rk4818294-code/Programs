/* 
unit-1 
1. c++ programming structure
2. namespaces
3. refernce variable
4. auto variable
5. rank based
6. types of pointer
7. default argument
8. inline function
9. function overlosding
10. pass by call , pointer
11. return by pointer


types of pointer 

wild pointer :  whenever declared and does not provide any address to it that pointer will be considered wild pointer
                 int *p;
NULL pointer : to escape fromdrawbacks of wild pointer we can have NULL pointer
                 int *p = NULL;

POINTER TO POINTER:it is a variable which stores address of some another pointer

int a=5;
int *p1 =&a;
int **p2 &p1



dangling pointer: 

void pointer : it is a pointer that can store address of any types of variable 
whenever we try to accessor mainipulate value of variable using void pointer we are required to typecast that void pointer into the type of variable.
  */            
                 