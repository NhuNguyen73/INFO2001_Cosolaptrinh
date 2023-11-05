#include <stdio.h>

int main() {
	//Input
	double diemHs;
	printf("Nhap diem so cua hoc sinh: ");
	scanf("%lf",&diemHs);
	//Process,Output
	if(diemHs<0 || diemHs>10){
		printf("Diem da nhap khong hop le.\n");
	}
	else{
		printf("Xep loai cua hoc sinh la: ");
		if(diemHs >= 9){
			printf("Xuat sac");
		}
		else if(diemHs >= 8){
			printf("Gioi");
		}
		else if(diemHs >= 6.5){
			printf("Kha");
		}
		else if(diemHs >= 5){
			printf("Trung binh");
		}
		else{
			printf("Yeu");
		}
		
	}
	return 0;
}

