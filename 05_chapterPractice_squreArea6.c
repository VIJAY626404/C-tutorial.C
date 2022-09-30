// use the library function  to calculate  the area of squre with side a
//     #include<stdio.h>
//     #include<math.h>
// int main(){
//     int side;
//     printf(" Enter the value of side is \n");
//     scanf("%d", &side);
//     printf(" Area of square is %f", pow(side , 2));
    
//      return 0 ;
//  }
    #include<stdio.h>
 
int main() {
  int side; 
  int area= side*side;
    printf(" Enter the value of side\n");
    scanf("%d", &side);
    printf(" Area of square is %d", side*side);
     return 0 ;
 }