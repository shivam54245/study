#include<stdio.h>
#define MAX 100

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

// Bubble Sort
void BSort(int arr[]) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                Swap(arr, j, j + 1);
            }
        }
    }
}

int main() {
    // Array
    int arr[MAX];
    for (int i = 0; i < MAX; i++) {
        arr[i] = MAX - i;
    }

    // Sort
    BSort(arr);
    printf("Sorted Array:\n");
    PrintArr(arr);
}