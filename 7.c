#include<stdio.h>
int main(){
    int value, total;
    printf("Enter the value \n");
    scanf("%d",&value);
    total= (int)value/100;
    printf("\n There are");
    printf(" \n %d nodes of  100.00\n",total);
    value= value- (total*100);
    total= (int)value/50;
    printf("%d Note(s) of 50.00\n", total);
	
    return 0;
}