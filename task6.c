#include <stdio.h>
int abs_arr(int arr[], int n){
    int count = 0;
    int *ptr = arr;
    for (*ptr; ptr < arr + n ; ptr++)
    {   
        if (*ptr < 0){
            *ptr = *ptr*(-1);
            count++;
        }
    }
    return count;
}




int main(){
    int n = 7;
    int arr[7] = {42, 21, -4, 12, -98, -12, -123};
    
    printf("%d\n", abs_arr(arr,7));

    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}