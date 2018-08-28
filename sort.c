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
  int temp[size];
  int i, j;
  clock_t begin, end;
  double time_spent;


  for(i = 0; i < size; i++){
    temp[i] = vector[i];
  }

  begin = clock();
  for(i = 0; i < size; i++){
    for(j = 0; j < size-i; j++){
      if(temp[j] > temp[j+1])
        swap(&temp[j], &temp[j+1]);
    }
  }
  end = clock();
  time_spent = (double)(end - begin); 
  printf("Tempo de ordenação do bubble sort: %fs\n", time_spent / CLOCKS_PER_SEC);
}


/* Insertion Sort */
void insertionSort(int* vector, int size) {
  int temp[size];
  int i, j, aux;
  clock_t begin, end;
  double time_spent;

  for(i = 0; i < size; i++){
    temp[i] = vector[i];
  }

  begin = clock();
  for (i = 1; i < size; i++) {
    aux = temp[i];
    j = i - 1; /* antecessor */
 
    /* Swaping values with sucessor */
    while (j >= 0 && temp[j] > aux) {
      temp[j + 1] = temp[j];
      j = j - 1;
    }

    temp[j + 1] = aux;
  }
  end = clock();
  time_spent = (double)(end - begin); 
  printf("Tempo de ordenação do insertion sort: %fs\n", time_spent / CLOCKS_PER_SEC);
}

/* Selection Sort */
void selectionSort(int* vector, int size) {
  int temp[size];
  int i, j;
  clock_t begin, end;
  double time_spent;


  for(i = 0; i < size; i++){
    temp[i] = vector[i];
  }

  begin = clock();
  for (i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (j = i + 1; j < size; j++)
      if (temp[j] < temp[minIndex])
        minIndex = j;
 
    swap(&temp[minIndex], &temp[i]);
  }
  end = clock();
  time_spent = (double)(end - begin); 
  printf("Tempo de ordenação do selection sort: %fs\n", time_spent / CLOCKS_PER_SEC);
}

