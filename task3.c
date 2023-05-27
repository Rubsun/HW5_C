#include <stdio.h>



struct Move getFinishPoint(struct Move arr[], int n) {
  struct Move Zero_point = {0, 0}; // Добавляю стартовую точку
  
  for (int i = 0; i < n; i++) {
    // Нахожу финальное положение
    Zero_point.x += arr[i].x;
    Zero_point.y += arr[i].y;
  }
  
  return Zero_point;
}

struct Move {
  int x;
  int y;
};


int main() {
  struct Move arr[3] = {{6, 1}, {-1, 4}, {5, -2}};
  int n = 3;

  struct Move Zero_point = getFinishPoint(arr, n);

  printf("%d, %d", Zero_point.x, Zero_point.y);

  return 0;
}
