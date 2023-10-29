#include <stdio.h>

int main(){
	//Input
	int a,b;
	int whole,remainder;
	printf("Nhap vao 2 so a,b voi b khac 0 ,-1018<= a,b <= 1018:");
	scanf("%d %d",&a,&b);
	//Process
	whole=a/b;
	remainder=a%b;
	//Output
	printf("Phan nguyen va phan du la: %d %d",whole,remainder);
	return 0;
}
