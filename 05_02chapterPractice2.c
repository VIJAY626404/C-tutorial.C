// write a function convert celcius tempertature into forenheit
    #include<stdio.h>
    float forenheit(float celcius);
 
int main(){
    float celcius;
    printf(" Enter the value of celcius \n");
    scanf("%f", &celcius);
    printf(" The value of forenheit % .2f\n", forenheit(celcius)) ;
     return 0 ;
 }
 float forenheit( float celcius){
 float result = 1.8 *celcius +32 ;
 return result ;
 }