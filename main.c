#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vector.h"
#include "helper.h"
#include "sort.h"

int main(void) {
  int size;
  int *vector;

  printf("Digite o tamanho do vetor: ");
  do{
    scanf("%d", &size);
    if (size <= 0)
      printf("Digite um valor válido.\n");
  }while(size <= 0);
  
  vector = createVector(size, 100);

  printf("Vetor original: ");
  printVector(vector, size);

  selectionSort(vector, size);
  insertionSort(vector, size);
  bubbleSort(vector, size);
  shellSort(vector, size);

  destroyVector(vector);
  return 0;
}
