// prime number :- A prime number is natural number greater than 1 that is not product of two similer natural number.
// Disclaimer: this is not a best method to solve this
    #include<stdio.h>
 
int main(){
    int n=45, prime=1;
    for (int i=2; i<n; i++){
        if(n%i==0){
            prime =0;
            break;
        }
    }
    if(prime==0){
        printf(" This is not a prime number");
    }
    else{
        printf(" This is a prime number");
    }
     return 0 ;
 }
// we can also write in while loop 
//     #include<stdio.h>
 
// int main(){
//     int i=2, n, prime=1;
//     printf("Enter the value of n \n");
//     scanf("%d", &n);
//     while (i<n)
//     {
//         i++;
//         if(n%i==0){
//             prime=0;
//             break;
//         }
//     }
//      if(prime==0){
//          printf("This is not a prime number");
//      }
//     else{
//         printf(" This is a prime number");
//     }
//      return 0 ;
//  }