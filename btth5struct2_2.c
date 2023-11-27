#include <stdio.h>

// Ð?nh nghia c?u trúc SinhVien
struct SinhVien {
    int id;
    char ten[30];
    // Các thu?c tính khác c?a sinh viên (gi?i tính, tu?i, di?m, ...)
};

// Hàm tìm ki?m sinh viên theo ID
void timKiemTheoID(struct SinhVien dsSV[], int n, int idCanTim) {
	int i;
    for ( i = 0; i < n; ++i) {
        if (dsSV[i].id == idCanTim) {
            printf("Thông tin sinh viên có ID %d:\n", idCanTim);
            printf("Tên: %s\n", dsSV[i].ten);
            // Hi?n th? các thông tin khác c?a sinh viên
            return; // K?t thúc hàm sau khi tìm th?y sinh viên
        }
    }
    printf("Không tìm th?y sinh viên có ID %d.\n", idCanTim);
}

int main() {
    int n; // S? lu?ng sinh viên
    printf("Nh?p s? lu?ng sinh viên: ");
    scanf("%d", &n);

    struct SinhVien dsSV[n]; // M?ng c?u trúc SinhVien

    // Nh?p thông tin cho t?ng sinh viên
    // ...

    int idCanTim;
    printf("Nh?p ID sinh viên c?n tìm: ");
    scanf("%d", &idCanTim);

    // Tìm ki?m sinh viên theo ID
    timKiemTheoID(dsSV, n, idCanTim);

    return 0;
}

