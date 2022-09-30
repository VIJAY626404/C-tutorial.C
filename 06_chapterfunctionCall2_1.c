    #include<stdio.h>
    int sum (int a, int b);

int main(){
    int a =4, b = 7;
    printf(" The value of a and b is %d and %d\n", a,b);
    printf("The value of 4+7 is %d\n", sum(a,b));
    printf(" The value of a and b after function call is %d and %d\n", a,b);
     return 0 ;
 }
 int sum( int a , int b){
     int c;
     c = a+b;
     b=5556;
     a=4567;
     return c;
 }
//  // call by value
//  // here  if sum is defined as int sum(int a , int b) the value 3 and 4 are copied to a and b.
// Now ever if we change  a and b  nothing happens to
//  // varriable x and y this call by value

// Hackar rank problem
// #include <stdio.h>

// int max_of_four(int a, int b, int c, int d)
// {
//     int greter;
//     if (a > b && a > c && a > d)
//     {
//         greter = a;
//     }
//     else if (b > a && b > c && b > d)
//     {
//         greter = b;
//     }
//     else if (c > a && c > b && c > d)
//     {
//         greter = c;
//     }
//     else if (d > a && d > b && d > c)
//     {
//         greter = d;
//     }
//     else if (a == b == c == d)
//     {
//         greter = a;
//     }
//     return greter;
// }

// int main()
// {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);

//     return 0;
// }
