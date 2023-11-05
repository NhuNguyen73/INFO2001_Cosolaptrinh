#include <stdio.h>

int main() {
	//Input
	int n,i;
	int sum=0;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d",&n);
	//Process
	for(i=1; i<=n; i++){
		sum=sum+i;
	}
	//Output
	printf("Tong cac so tu 1 den n la: %d",sum);
	return 0;
	
}
