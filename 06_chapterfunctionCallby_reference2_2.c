    #include<stdio.h>
    void wrong_swap( int a , int b);
    void _swap( int *a , int *b);
 
int main(){
    int a=3, b=4;
    printf(" The value of a and b before swap  is %d and %d\n", a,b);
    // wrong_swap(a, b ); //will not work due to call by value 
   swap(&a , &b);// will work due to call by reference or address
   printf(" The value of a and b after swap is %d and %d\n", a, b);
    
     return 0 ;
 }
 void wrong_swap( int a , int b){
     int temp;
     temp = a;
     a=b;
     b= temp;
 }
 void swap(int *a , int *b){
     int temp;
     temp = *a;
    *a=*b;
     *b= temp;


 }