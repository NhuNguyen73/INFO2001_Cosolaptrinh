#include <stdio.h>

// �?nh nghia c?u tr�c SinhVien
struct SinhVien {
    int id;
    char ten[30];
    // C�c thu?c t�nh kh�c c?a sinh vi�n (gi?i t�nh, tu?i, di?m, ...)
};

// H�m t�m ki?m sinh vi�n theo ID
void timKiemTheoID(struct SinhVien dsSV[], int n, int idCanTim) {
	int i;
    for ( i = 0; i < n; ++i) {
        if (dsSV[i].id == idCanTim) {
            printf("Th�ng tin sinh vi�n c� ID %d:\n", idCanTim);
            printf("T�n: %s\n", dsSV[i].ten);
            // Hi?n th? c�c th�ng tin kh�c c?a sinh vi�n
            return; // K?t th�c h�m sau khi t�m th?y sinh vi�n
        }
    }
    printf("Kh�ng t�m th?y sinh vi�n c� ID %d.\n", idCanTim);
}

int main() {
    int n; // S? lu?ng sinh vi�n
    printf("Nh?p s? lu?ng sinh vi�n: ");
    scanf("%d", &n);

    struct SinhVien dsSV[n]; // M?ng c?u tr�c SinhVien

    // Nh?p th�ng tin cho t?ng sinh vi�n
    // ...

    int idCanTim;
    printf("Nh?p ID sinh vi�n c?n t�m: ");
    scanf("%d", &idCanTim);

    // T�m ki?m sinh vi�n theo ID
    timKiemTheoID(dsSV, n, idCanTim);

    return 0;
}

