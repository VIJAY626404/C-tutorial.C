    #include<stdio.h>
 
int main(){
    int n;
    int rem;
    int a[10];
    int i=0;
    printf("Enter the value of number\n");
    scanf("%d", &n);
    while(n){
        rem= n%2;
        n= n/2;
        a[i]= rem;
        i++;
    }
    for(int j = i-1; j>=0; j--){
        printf("%d", a[j]);
    }

     return 0 ;
 }