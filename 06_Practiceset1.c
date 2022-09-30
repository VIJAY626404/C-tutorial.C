  // write a programe to print address of a varible . Use this address to get the value of this variable
    #include<stdio.h>
 
int main(){
    int a =5; 
    int *ptr;
    ptr = &a;
    printf(" The value  of variable  a is %d\n", a);
    printf(" The address of variable a is %d\n",ptr);
    printf(" The value of variable  a is %d\n", *ptr);


     return 0 ;
 }