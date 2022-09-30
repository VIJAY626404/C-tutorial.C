    #include<stdio.h>
 // sum is funciton which takes values of a and b as a input and returns an intigers as  an output
  int sum( int a, int b ); //  function prototype declaration  
    
int main(){
    int c ;
    c= sum(12 , 15); // function call
    printf(" The value of c is %d\n",c);
     return 0 ;
 }
 int sum( int a , int b ){
  int c ;
 c = a+b ;
    return c ;
 }
 

 // parametres are variable and arguments are actual value 
 // misnomer function:  when a passed varriable is changed inside the  function
//  int b= 20;
//  change(b); ------->The value of b remains 20
//  printf("b is %d",b);
//  prints b is 20