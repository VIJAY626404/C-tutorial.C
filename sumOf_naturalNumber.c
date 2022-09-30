// ### First method
# include<stdio.h>
int main(){
    int n, sum ;
    printf("Enter the number you want the sum of\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        sum = (n*n+n)/2 ;
    }
    printf("The sum of natural number is %d\n",  sum);
return 0;
}


// **2nd method
//     #include<stdio.h>
 
// int main(){
//     int n , sum=0;
//     printf("Enter the number\n");
//     scanf("%d", &n);
//     // Sum = 1+2+3++++++++++n
//     for(int i =1; i<=n; i++){
//         sum+= i;
//     }
//     printf("Sum of first %d natural number is %d\n", n, sum);

//      return 0 ;
//  }

