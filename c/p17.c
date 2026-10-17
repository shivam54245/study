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

// Selection Sort
void SSort(int arr[]) {
    for (int i = 0; i < MAX - 1; i++) {
        int i_min = i;
        for (int j = i + 1; j < MAX; j++) {
            if (arr[i_min] > arr[j]) {
                i_min = j;
            }
        }
        PrintArr(arr);
        Swap(arr, i, i_min);
    }
}

int main() {
    // Array
    int arr[MAX];
    for (int i = 0; i < MAX; i++) {
        arr[i] = MAX - i;
    }

    // Sort
    SSort(arr);
    printf("Sorted Array:\n");
    PrintArr(arr);
}