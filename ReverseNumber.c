#include <stdio.h>
int reverse(int num){
    int rev=0, rem;
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num= num/10;
    }
    return rev;
}
int main()
{
    int num;
    printf("Enter the value of number\n");
    scanf("%d", &num);
      printf("The reversed number is %d",  rev);
    return 0;
}