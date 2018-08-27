#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vector.h"
#include "helper.h"
#include "sort.h"

int main(void) {
  
  int* vector = createVector(5, 10);
  printVector(vector, 5);
  clock_t begin = clock();
    selectionSort(vector, 5);
  clock_t end = clock();

  double time_spent = (double)(end - begin); 
  printf("Numbers of clock ticks used in CPU: %f\n", time_spent);

  return 0;
}
