    // write a programe to print  first n natural number by using for loop in reverse order
    
    #include<stdio.h>
 
int main(){
    int n;
    
    printf(" Enter the value of n\n");
    scanf("%d",&n);
    for( int i=n; i ; i--){
        printf(" The natural number is %d\n", i);

    }
     return 0 ;
 }