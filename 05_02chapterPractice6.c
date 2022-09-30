// write a recursive function to the calculate the sum of n natural number 
    #include<stdio.h>
    
int main(){
    int n;
    int sum;
    printf("Enter the value of number is \n");
    scanf("%d",&n);
    sum = (n*n+n)/2 ;
    
   // sum+=1
    printf("The sum of natural number  %d is %d\n", n, sum);
    
     return 0 ;
 }

    