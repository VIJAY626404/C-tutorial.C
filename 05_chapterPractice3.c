// Inside function 
#include<stdio.h>
 void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
 goodMorning();
     return 0 ;
 }
 void goodMorning(){
 printf(" GoodMorning Vijay \n");
 goodAfternoon();
 }
 void goodAfternoon(){
 printf(" GoodAfternoon Vijay \n");
 goodNight();
 }
 void goodNight(){
 printf(" GoodNightVijay \n");
 }
 // two type of function
 //library function and usuar defined function