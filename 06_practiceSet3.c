//  write a programe to change the value of a variable to ten times of its current value.
//write the function and pass the value by reference
// call by value ------> pass the value of variable******
// call by  reference-------> pass the value of address*****
    #include<stdio.h>
 
int main(){
    int i= 4; 
    printf("The address of variable i is %d\n",&i);
    printf( " Change the  10 time value of i is %d\n", *(&i));

     return 0 ;
 }