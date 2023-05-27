#include <stdio.h>






int main(){
    int row, col, sum=0, temp=0, col_sum[col], max_index = 0, min_index = 0;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    //записываю матрицу
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    
    //нахожу сумму каждой калонны
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        col_sum[i] = sum;
    }

    
    //находу максимальный и минимальный индексы калонн по сумме
    for (int i = 1; i < row; i++)
    {
        if (col_sum[i] < col_sum[min_index])
        {
            min_index = i;
        }
        if (col_sum[i] > col_sum[max_index])
        {
            max_index = i;
        }
    }
    
    printf("\n");
    //замена калонн
    for (int i = 0; i < row; i++)
    {
        temp = arr[i][min_index];
        arr[i][min_index] = arr[i][max_index];
        arr[i][max_index]=temp;
    }

    //вывод матрицы
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

