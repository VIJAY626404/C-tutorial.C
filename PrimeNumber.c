    #include<stdio.h>
 
int main(){
    int n;
    int isPrime= 1;
    printf("Enter the value of n is\n");
    scanf("%d",&n);
    for(int i =2; i*i <n; i++){
        if(n%i==0){
            isPrime=0;
        }
    }
    if(isPrime){
        printf("The number %d is prime number\n",n);
    }
    else{
        printf("The number %d is not prime number\n", n);
    }
     return 0 ;
 }