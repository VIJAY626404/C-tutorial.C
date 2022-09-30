    #include<stdio.h>
 
int returnMax(int array[ ], int n){
    int max= 0;
    for (int i = 0; i<n; i++){
        if(array[i]>max){
            max= array[i];
        }
    }
    array[0]= 999;
    return max;
}
    int main(){
        int arr[]= {1, 12, 14, 555, 456, 7890, 0};
        int max = returnMax(arr, 7); 
        printf("The maximum element in this array is %d", max);
        for(int i= 0; i<7; i++){
            
        }
        printf("The element %d is %d\n", i, arr[i]) ;
    }
    
     return 0 ;
     }
 