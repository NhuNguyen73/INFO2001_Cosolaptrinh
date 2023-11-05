#include <stdio.h>
#include <math.h>

int main() {
	int N,i;
	int isPrime = 1; // bien luu tt cua N,1 la so ngto, 0 la ko phai
	printf("Nhap vao so nguyen duong N: ");
	scanf("%d",&N);
	if(N<2){
		isPrime =0; //gan gia tri 0 cho bien da luu
	}else{
		for(i=2; i <= sqrt(N); i++){
			if(N%i==0){
				isPrime=0;
			}
			break;
		}
	}
	if(isPrime=1){
		printf("So da nhap la so nguyen to.\n");
	}else{
		printf("So da nhap khong phai so nguyen to.\n");
		}
	return 0;
}
