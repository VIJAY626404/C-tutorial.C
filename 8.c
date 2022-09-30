    #include<stdio.h>
    // int arr[101];
    // int num;
 
int main(){
    int x, i, min_num, result;
     int arr[101];
    int num;
 
    printf("Enter the number how much do you want take  :\n");
    scanf("%d",&num); 
    for(int i=0; i<num; i++){
        // printf("Numbers are : \n  ");
        scanf("%d",&x);
        arr[x]++;
    }
    min_num =100;
    for(int i=0; i<min_num;i++){
        if( arr[i]>0 && arr[i]<min_num){
            result= i;
            min_num = arr[i];
        }
    }
    printf("Smallest among the said integer %d\n", result);
    
     return 0 ;
 }