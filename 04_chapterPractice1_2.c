 //  write a programe to print multipication table of n number
    #include<stdio.h>
 
int main(){
    int num;
    printf(" Enter the value of number \n");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
       printf("%d*%d = %d \n", num, i, num*i);
    }
    printf("*******Multipication table has done********\n");
     return 0 ;
    }

    // this is incomplete
    // we can  perform one task by any loops