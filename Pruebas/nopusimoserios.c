/*
 * Este código fue creado por 4lex-42.
 * Implementa el algoritmo de ordenación QuickSort con una optimización de "median of three".
 */

#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int medianOfThree(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;
    if (arr[low] > arr[mid])
        swap(&arr[low], &arr[mid]);
    if (arr[mid] > arr[high])
        swap(&arr[mid], &arr[high]);
    if (arr[low] > arr[mid])
        swap(&arr[low], &arr[mid]);
    return mid;
}

int partition(int arr[], int low, int high) {
    int pivotIndex = medianOfThree(arr, low, high);
    int pivotValue = arr[pivotIndex];
    swap(&arr[pivotIndex], &arr[high]);
    int storeIndex = low;
    for (int i = low; i < high; i++) {
        if (arr[i] < pivotValue) {
            swap(&arr[i], &arr[storeIndex]);
            storeIndex++;
        }
    }
    swap(&arr[storeIndex], &arr[high]);
    return storeIndex;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Array ordenado: \n");
    printArray(arr, n);
    return 0;
}
