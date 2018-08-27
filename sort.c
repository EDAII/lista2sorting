#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vector.h"

void swap(int* firstValue, int* secondValue) {
  int aux = *firstValue;
  *firstValue = *secondValue;
  *secondValue = aux;
}

void bubbleSort(int* vector, int size) {
}


/* Insertion Sort */
void insertionSort(int* vector, int size) {
  for (int i = 1; i < size; i++) {
    int aux = vector[i];
    int j = i - 1; /* antecessor */
 
    /* Swaping values with sucessor */
    while (j >= 0 && vector[j] > aux) {
      vector[j + 1] = vector[j];
      j = j - 1;
    }

    vector[j + 1] = aux;
  }

  printVector(vector, size);
}

/* Selection Sort */
void selectionSort(int* vector, int size) {
  for (int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
      if (vector[j] < vector[minIndex])
        minIndex = j;
 
    swap(&vector[minIndex], &vector[i]);
  }

  printVector(vector, size);
}

