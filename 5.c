#include<stdio.h>
int main(){
int a=125,b= 12345;
long ax= 1234567890;
short s= 4043;
float x= 2.13459;
double dx=1.1415927;
char c = 'W';
unsigned long  ux=2541567890;
printf(" a+c = %d  \n", a+c);
printf(" x+c = %f  \n", x+c);
printf(" dx+c = %f  \n", dx+c);
printf(" ((int)dx+ax) = %1d  \n", ((int)dx+ax));
printf(" a+x = %f  \n", a+x);
printf(" s+b = %d  \n", s+b);
printf(" ax+b = %1d  \n", ax+b);
printf(" ax+c = %1d  \n", ax+c);
printf(" s+c = %hd  \n", s+c);
printf(" ax+ux = %1u  \n", ax+ux);

    return 0;
}