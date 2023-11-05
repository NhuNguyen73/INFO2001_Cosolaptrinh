#include <stdio.h>

int main() {
	//Input
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d",&n);
	//Process,Output
	if(n%2==0){
		printf("So %d da nhap la so chan.\n",n);
	}else{
		printf("So %d da nhap la so le.\n",n);
	}
	return 0;
}
