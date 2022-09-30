// to calculate a force with respect to mass
    #include<stdio.h>
    float force(float mass);
 
int main(){
    float mass;
    printf(" Enter the value of mass in kgs is \n");
    scanf("%f", &mass); 
    printf(" The value of force in newton % .2f\n", force(mass));
     return 0 ;
 }
 float force(float mass){
     float result = mass* 9.8 ;
     return result ;
 }