//     #include<stdio.h>
//     int factorial (int x);
 
// int main(){
//     int a=4;
//     printf("The value of factorial %d is %d", a , factorial(a));
//      return 0 ;
//  }
//  int factorial(int x){
//      //int x;
//     printf(" Calling factorial (%d)\n",x);
//     if( x==0 || x==1){
//      return 1;
//     }        
    
// else{
//     return x*factorial(x-1);
//   // return f; 
// }
//  }


  #include<stdio.h>
 
int main() {
    int i=0, n, factorial =1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d", n, factorial);
     return 0 ;
 }

    
    
 



 