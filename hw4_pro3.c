#include <stdio.h>

int main() {
	//Input
	int N,i;
	int sum = 0;
	printf("Nhap vao so N: ");
	scanf("%d",&N);
	//Process
	for (i=1; i <= (2*N - 1); i +=2){
		sum= sum + i;
	}
	//Output
	printf("Tong cua %d so le dau tien la: %d\n", N, sum);
	return 0;
}
