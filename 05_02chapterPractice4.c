   // write a programe using recurson to calculate nth  element of fibonacci sequence
   // hint :-----> 
   // fib(n)= fib(n-1) + fib(n-2)
   // fib(1) = 0;
   // fib(2) = 1;
   #include<stdio.h>
    int fib (int n);
 
int main(){
    int n=4;
    printf("The value of fib(n) %d is %d" , fib(n));
     return 0 ;
 }
 int fib(int n){
     int n;
    // printf(" Calling fib (%d)\n",n);
    if( n==0 || n==1){
     return 1;
    }        
    
else{
    return fib(n-1) + fib(n-2);
  return fib; 
}
 }