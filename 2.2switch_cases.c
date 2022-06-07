#include<stdio.h>
int main(){
  int rating;
  printf("Enter Your ratin (1-5) is : \n");
  scanf("%d", &rating);
  switch(rating){
    case 1:
      printf("Your rating is 1\n");
      break ;
      case 2:
      printf("Your rating is 2\n");
      break ;
      case 3:
      printf("Your rating is 3\n");
      break ;
      case 4:
      printf("Your rating is 4\n");
      break ;
      case 5:
      printf("Your rating is 5\n");
      break ;
      default{
      printf("You have entered invalid rating \n");
      break ;
      }
  return 0;
}
