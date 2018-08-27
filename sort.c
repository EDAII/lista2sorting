#include <stdio.h>
#include <stdlib.h>

void swap(int* firstValue, int* secondValue) {
    int aux = *firstValue;
    *firstValue = *secondValue;
    *secondValue = aux;
}

int* insertionSort(int* vector) {



}

int* bubbleSort(int* vector) {

}

int* selectionSort(int* vector, size) {
    int minIndex = -1;

    for (int i = 0; i < size - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
          if (vector[j] < vector[minIndex])
            minIndex = j;
 
        swap(&vector[minIndex], &vector[minIndex]);
    }
}

