    // First method
//     #include<stdio.h>
//     int factorialRecursive(int n){
//         if(n==0 || n==1){
//             return 1;
//         }
//         else{
//             return n*factorialRecursive(n-1);
//         }  
//     }
// int main(){
//     int n;
//     // int factorial(n);
//     printf("Enter the value of number for factorial calculation\n");
//     scanf("%d",&n);
//     int factorial= factorialRecursive(n);
//     printf("The value of factorial is %d\n", factorial);
    
//      return 0 ;
//  }

 //2nd method
    #include<stdio.h>
    int factorialIterative(int n){
       int val=1;
       for (int i=n; i>1; i--){
           val*=1;
       }
       return val;
    }

int main(){
    int n;
    // int factorial(n);
    printf("Enter the value of number for factorial calculation\n");
    scanf("%d",&n);
    int factorial= factorialIterative(n);
    printf("The value of factorial is %d\n", factorial);
    
     return 0 ;
 }