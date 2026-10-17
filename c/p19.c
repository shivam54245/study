#include<stdio.h>
#define MAX 10

void PrintArr(int arr[]) {
    printf("[ %d", arr[0]);
    for (int i = 1; i < MAX; i++) {
        printf(", %d", arr[i]);
    }
    printf(" ]\n");
}

void Merge(int arr[], int l, int m, int r, int temp[]) {
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while (i <= m) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];
    for (int i = l; i <= r; i++) {
        arr[i] = temp[i];
    }
}

// Merge Sort
void MSort(int arr[], int i, int j, int temp[]) {
    if (i >= j) return;
    int m = (i + j) / 2;
    MSort(arr, i, m, temp);
    MSort(arr, m + 1, j, temp);
    Merge(arr, i, m, j, temp);
}

int main() {
    // Array
    int arr[MAX] = {10, 9, 8, 7, 5, 2, 3, 1, 4, 6};
    int temp[MAX];
    // Sort
    MSort(arr, 0, MAX - 1, temp);
    printf("Sorted Array:\n");
    PrintArr(arr);
}
