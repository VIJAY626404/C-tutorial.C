 //  write a programe to print  first n natural number by using for loop
 
   #include<stdio.h>
int main(){
    int n ;
    int i;
    printf(" Enter the value n\n");
    scanf("%d", &n);
    for( int i=0;  i<n;  i++){
        printf("  The number is %d\n", i+1);
    }
     return 0 ;
 }