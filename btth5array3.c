#include <stdio.h>

// ham nhap diem
void nhapdiem(float diem[], int n) {
	int i;
    for (i = 0; i < n; i++) {    
    printf("Nhap diem cua sinh vien thu %d: ", i + 1);
    scanf("%f", &diem[i]);
    }
}
// ham tinh diemtb
float tinh_diemTB(float diem[], int n) {
	int i;
    //kb bien luu tru tongdiem
    float tong = 0;  
    for ( i = 0; i < n; i++) {
    // cong vao tong
    tong += diem[i];
    }
    //tra ve diemtb=tong/n
    return tong / n;
}

// ham in
void in_diemTB(float diemTB) {
 	printf("Diem trung binh cua lop la: %.2f\n", diemTB);
}

int main() {
    // kb,khoi tao mang
    float diem[100];
    // kb so lg sinh vien
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    nhapdiem(diem, n); //nhap
    float diemTB = tinh_diemTB(diem, n); //tinh
    in_diemTB(diemTB); //in
  
    return 0;
}

