#include <stdio.h>
#include <string.h>

// dinh nghia
struct SinhVien {
    int id;
    char ten[27];
    // co the them thuoc tinh khac
};

// Ham sap xep(Bubble Sort)
void sapXepTheoTen(struct SinhVien dsSV[], int n) {
	int i,j;
    for (i=0; i<n-1; ++i) {
        for ( j=0; j<n-i-1; ++j) {
            if (strcmp(dsSV[j].ten, dsSV[j + 1].ten) > 0) {
                struct SinhVien temp = dsSV[j];
                dsSV[j] = dsSV[j + 1];
                dsSV[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct SinhVien dsSV[n]; //Mang
    // Nhap thong tin cua sinh vien
    sapXepTheoTen(dsSV, n); //sap xep
    return 0;
}


