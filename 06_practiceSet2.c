    // write a programe having a variable i. Print the address of i . pass the variable  to a 
    // function and print its address. Are these address same? why?
    #include<stdio.h>
 void prindAdd( int a){
     printf(" The address of variable a is %u\n", &a);
 }
int main(){
    int i ;
    printf(" The value of variable i is %d\n", i);
   // printAdd(i);
    printf(" The address of variable i is %u\n",&i);
     return 0 ;
 }