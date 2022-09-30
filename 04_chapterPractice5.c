 // write a programe to calculate the sum of the number occourint the multipication table of 8( 8X1 to 8x10)
    #include<stdio.h>
 
int main(){
    int num =8;
    printf("the value of num is %d \n", num);
  //  scanf("%d", &num);
    for(int i=1; i<=10; i++){
        printf("%d*%d= %d \n", num, i, num*i);
    }
     return 0 ;
 }