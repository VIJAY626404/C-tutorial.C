    #include<stdio.h>
 
int main(){
  //  int i= 34; // if i = 34 then code is not run because 34 is not less then 10
    int i= 1;
    do{
        printf(" value is %d\n",i);
        i++ ;
    } while( i <10);

     return 0 ;
 }
 // syntax of do_while loop is
 // do{
     // code;
     // code;
 //} while(condition)