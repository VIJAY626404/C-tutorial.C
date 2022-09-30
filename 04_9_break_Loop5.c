    #include<stdio.h>
 
int main(){

    for( int i=0; i<1000; i++){
        printf(" The value of i is  %d\n",i);
        if( i==100){
            break;
        }
    }
     return 0 ;
 }