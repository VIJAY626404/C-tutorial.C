//   1 *******
 #include<stdio.h>
 
int main(){
    int  i, sum=0 ,n= 10;
    for(i=1; i<=n; i++){
        sum += i;
    }
    printf(" The value of sum (1 to 10) is %d", sum);
     return 0 ;
 }
// 2*******
 //  ******also we can read in while loop
//     #include<stdio.h>
 
// int main(){
//     int i=1, sum=0, n=10;
//     while(i<=n){
//         sum+=i;
//         i++ ;
//     }
//     printf(" The value of sum (1 to 10) is %d", sum);
//      return 0 ;
//  }
// 3*******
 // we can also write in do_while loop
//     #include<stdio.h>
 
// int main(){
//     int i=1, sum=0, n=10;
//     do{
//         sum+=i;
//         i++;
//     } while(i<=n);
//     printf(" The value of sum  (1 to 10) is %d", sum);
//      return 0 ;
//  }