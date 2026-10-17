#include<stdio.h>
#define MAX 10

void PrintArr(int arr[]) {
    printf("[ %d", arr[0]);
    for (int i = 1; i < MAX; i++) {
        printf(", %d", arr[i]);
    }
    printf(" ]\n");
}

void Swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Insertion Sort
void ISort(int arr[]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                Swap(arr, j, j - 1);
            }
        }
    }
}

int main() {
    // Array
    int arr[MAX] = {10, 9, 8, 7, 5, 2, 3, 1, 4, 6};

    // Sort
    ISort(arr);
    printf("Sorted Array:\n");
    PrintArr(arr);
}