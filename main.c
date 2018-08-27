#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "helper.h"
#include "sort.h"

int main(void) {

  int* vector = createVector(5, 10);
  printVector(vector, 5);
  selectionSort(vector, 5);


  return 0;
}
