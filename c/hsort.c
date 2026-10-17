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

void SiftUp(int arr[], int h) {
    int parent = (h - 1)/2;
    if (arr[h] > arr[parent]) {
        Swap(arr, h, parent);
    }
    if (h != 0) {
        SiftUp(arr, parent);
    }
}

void SiftDown(int arr[], int i, int lim) {
    int left = 2 * i + 1;
    int right = left + 1;
    if (right > lim) return;
    if (arr[i] > arr[left]) {
        if (arr[i] < arr[right]) {
            Swap(arr, i, right);
            SiftDown(arr, right, lim);
        } else return;
    } else {
        if (arr[i] > arr[right]) {
            Swap(arr, i, left);
            SiftDown(arr, left, lim);
        } else {
            int biggest = arr[left] > arr[right] ? left : right;
            Swap(arr, i, biggest);
            SiftDown(arr, biggest, lim);
        }
    }
}

// Heap Sort
void HSort(int arr[]) {
    for (int h = 1; h < MAX; h++) {
        SiftUp(arr, h);
    }
    for (int h = MAX - 1; h > 1; h--) {
        Swap(arr, h, 0);
        SiftDown(arr, 0, h - 1);
    }
}

int main() {
    // Array
    int arr[MAX] = {10, 9, 8, 7, 5, 2, 3, 1, 4, 6};

    // Sort
    HSort(arr);
    printf("Sorted Array:\n");
    PrintArr(arr);
}