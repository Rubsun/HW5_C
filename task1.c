#include <stdio.h>

void swap(int arr[], int N){
    int k = N/2;
    for (int i = 0; i < k; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i + k];
        arr[i+k]=temp;
    }
     
}


int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)// Считываем массив чисел
    {
        scanf("%d", &arr[i]);
    }

    swap(arr,N);

    for (int i = 0; i < N; i++)// выводим список
    {
        printf("%d", arr[i]);
    }
    return 0;
      
}