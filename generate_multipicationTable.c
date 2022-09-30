    #include<stdio.h>
 
int main(){
    int n;
    printf("Enter the value of number\n");
    scanf("%d", &n);
    for(int i=0; i<=10; i++){
        printf(" Multipication %d X %d = %d\n",n, i, i*n);
    }
    printf("******Multipication Table has generated********");
     return 0 ;
 }