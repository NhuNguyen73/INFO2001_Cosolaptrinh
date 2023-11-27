#include <stdio.h>

// Ham tim kiem tuyen tinh
int linear_search(int arr[], int n, int x) {
	int i;
  // Duyet qua tung phan tu
    for (i = 0; i < n; i++) {
    // phan tu=x, tra ve i
    if (arr[i] == x) {
      return i;
    }
    }
  // ko tim thay x, tra ve -1
  return -1;
}

// ham tim kiem nhi phan
int binary_search(int arr[], int n, int x) {
  // kb bien luu tru trai,phai,giua
  int left = 0;
  int right = n - 1;
  int mid;
  // lap den khi trai ko lon hon phai
  while (left <= right) {
    // tinh chi so giua
    mid = (left + right) / 2;
    // neu chi so giua=x,tra ve mid
    if (arr[mid] == x) {
      return mid;
    }
    // neu >x, tim kiem nua trai mang
    else if (arr[mid] > x) {
      right = mid - 1;
    }
    // con lai, tim kiem nua phai cua mang
    else {
      left = mid + 1;
    }
  }
  // ko thay x, tra ve -1
  return -1;
}

// ham in mang
void print_array(int arr[], int n) {  
	int i;
    for ( i = 0; i < n; i++) {  
    printf("%d ", arr[i]);
    }  
    printf("\n");
}
int main() {
  // kb, khoi tao mang
  int arr[] = {3,4,5,7,8,9,13,14,17,19,20,22,25,27,28,33,37};
  int n = sizeof(arr) / sizeof(arr[0]); //tinh so ptu mang
  // in
  printf("Mang: ");
  print_array(arr, n);
  // nhap x
  int x;
  printf("Nhap gia tri x can tim: ");
  scanf("%d", &x);
  // tim kiem 
  int linear_result = linear_search(arr, n, x); //tuyen tinh
  int binary_result = binary_search(arr, n, x); //nhi phan
  // in
  if (linear_result == -1) {
    printf("Khong tim thay %d bang tim kiem tuyen tinh\n", x);
  } else {
    printf("Tim thay %d bang tim kiem tuyen tinh tai vi tri %d\n", x, linear_result);
  }
  if (binary_result == -1) {
    printf("Khong tim thay %d bang tim kiem nhi phan\n", x);
  } else {
    printf("Tim thay %d bang tim kiem nhi phan tai vi tri %d\n", x, binary_result);
  }
  return 0;
}

