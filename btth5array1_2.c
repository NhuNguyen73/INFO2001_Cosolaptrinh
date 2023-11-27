#include <stdio.h>

void selectionSort(int arr[], int n) {
	int i,j;
    for ( i = 0; i < n - 1; ++i) {
        int min_index = i;
        for ( j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int n,i;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Mang sau khi sap xep (Selection Sort):\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}

