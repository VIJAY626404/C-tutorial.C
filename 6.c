//     #include<stdio.h>
 
// int main(){
//     int days, years,weeks;
//     days=1329;
//     years= days/365;
//     weeks= (days%365)/7;
//     days= days-((years*365)+(weeks*7));
//     printf("Years: %d \n",years);
//     printf("Weaks: %d \n",weeks);
//     printf("Days: %d \n",days);
//      return 0 ;
//  }
    #include<stdio.h>

 
int main(){
    int x,y,z;
    //  int max;
     printf("Enter the value of x  is \n");
    scanf("%d", &x);
     printf("Enter the value of y is \n");
    scanf("%d", &y);
     printf("Enter the value of  z is \n");
    scanf("%d", &z);
    if(x>y && x>z){
        printf(" %d is maximum\n", x);
    }
    else if(y>x && y>z){
        printf("%d is maximum\n", y);
    }
    else{
        printf("%d is maximum", z);
    }
   
     return 0 ;
 }