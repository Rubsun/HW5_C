#include <stdio.h>

struct Person {
    int age;           // возраст
    char name[30];     // имя
};

float averageAge(struct Person arr[], int n) {
    int sum = 0;       
    for (int i = 0; i < n; i++) {
        sum += arr[i].age;
    }
    return (float)sum / n;  
}

int main() {
    int n = 5;   
    struct Person arr[5] = {{23, "Ivan"}, {54, "Popitos"}, {11, "Pablo"}, {34, "Black"}, {78, "White"}};
    float avg = averageAge(arr, n);   
    printf("Средний возраст: %f\n", avg);  
    return 0;
}