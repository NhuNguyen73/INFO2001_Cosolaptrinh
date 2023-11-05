#include <stdio.h>

int main() {
	int i,j;
	for(i = 2; i <= 9; i++){
		printf("Bang cuu chuong cua %d la:\n", i);
		for(j = 1; j <= 10; j++){
			printf("%d x %d = %d\n",i,j,i * j);
		}
		printf("\n");//tach biet bang cuu chuong cua cac so
	}
	return 0;	 
}
