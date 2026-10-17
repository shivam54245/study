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

void SiftDown(int heap[], int index, int len) {
    
}

void SiftUp (int heap[], int index) {
    int parent = (index - 1) / 2;
    if (heap[index] < heap[parent]) {
        Swap(heap, index, parent);
        SiftUp(heap, parent);
    }
}

// Heap Sort
void HSort(int arr[]) {
    int heap[MAX];
    for (int i = 0; i < MAX; i++) {
        heap[i] = arr[i];
        SiftUp(heap, i);
    }
    for (int i = 0; i < MAX; i++) {
        arr[i] = heap[0];
        Swap(heap, 0, MAX - i - 1);
        SiftDown(heap, 0, MAX - i);
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