#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "helper.h"
#include "sort.h"

int main(void) {

  int* vector = createVector(5, 10);
  printVector(vector, 5);
  int* newVector = selectionSort(vector, 5);
  printVector(newVector, 5);

  return 0;
}
