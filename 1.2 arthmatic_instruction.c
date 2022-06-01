#include<stdio.h>
    //#include< math.h>
 
int main() {
    int a = 4;
    int b = 6;

    printf(" The value of a+b is : %d\n", a+b);
    printf(" The value of a-b is : %d\n", a-b);
    printf(" The value of a*b is : %d\n", a*b);
    printf(" The value of a/b is : %d\n", a/b);

    int z ;
    z = b*a ; // legal
    // b*a =z ; // illegal
    printf(" The value of z is : %d\n", z );
    printf(" 5 When divided by 2 leaves remainder is %d\n", 5%2);
    printf(" 5 When divided by -2 leaves remainder is %d\n", -5%2);
    printf(" 5 When divided by 2 leaves remainder is %d\n", 5%-2);
     //No operator is assumed to be present
     // int =ab ---> invalid
     //int = a*b---> valid
     // There is no operation to perform in exponentiation in c
     printf(" The value of 4^5 is : %d\n ", 4^5 );  //---> will not produce 4 to the power 5
     printf(" The value of 4^5 is : %f\n ", pow( 4,5 )  ); 

     printf(" The value of 5+6 is %d\n", 5+6);
     printf(" The value of 5.6+6 is %f\n", 5.6+6);
     printf(" The value of 5.6+6.2 is %f\n", 5.6+6.2);
     printf(" The value of 5+6 is %d\n", 5+6);
     printf(" The value of 5/2 is %d\n" ,5/2);
     printf(" The value of 5.3/2 is %f\n", 5.3/2);

     return 0 ;
 }
