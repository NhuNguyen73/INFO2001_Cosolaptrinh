#include <stdio.h>
#include <string.h>


struct Student {
    char name[50]; 
    int id; 
    float score; 
};


void input(struct Student *s);
void display(struct Student s);
void update(struct Student *s);
int search(struct Student arr[], int n, int id);

// Khai báo
#define MAX 100
// ham nhap
void input(struct Student *s) {
    printf("Nhap ten: ");
    scanf("%s", s->name);
    printf("Nhap ma: ");
    scanf("%d", &s->id);
    printf("Nhap diem: ");
    scanf("%f", &s->score);
}

// ham hien thi
void display(struct Student s) {
    printf("%s\t%d\t%.2f\n", s.name, s.id, s.score);
}

//ham cap nhat
void update(struct Student *s) {
    printf("Nhap ten moi: ");
    scanf("%s", s->name);
    printf("Nhap diem moi: ");
    scanf("%f", &s->score);
}

// dinh nghia ham tim kiem sinh vien
int search(struct Student arr[], int n, int id) {
    
    int i;
    for ( i = 0; i < n; i++) {
        if (arr[i].id == id) {
           
            return i;
        }
    }
    return -1;
}

int main() {
    struct Student students[MAX];
	int count = 0;
	int choice;
	int id;
    int index; //bien luu vi tri

    // Hien thi chuong trinh
    printf("=====HE THONG QUAN LI SINH VIEN=====\n");
    printf("1. Nhap thong tin sinh vien\n");
    printf("2. Hien thi thong tin sinh vien\n");
    printf("3. Cap nhat thong tin sinh vien\n");
    printf("4. Thoat chuong trinh\n");

    //vong lap den khi thoat
    do {
        printf("Nhap lua chon(1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // nhap
                // Kiem tra
                if (count == MAX) {
                    printf("Khong the nhap them sinh vien!\n");
                }
                else {
                    input(&students[count]);
					count++;

                    printf("Nhap thanh cong!\n");
                }
                break;
            case 2: // hien thi
                // kiem tra co sinh vien hay ko
                if (count == 0) {
                    printf("Ko co sinh vien dc hien thi!\n");
                }
                else {
                
                    printf("Ten\tMa\tDiem\n");

                    
                    int i;
                    for ( i = 0; i < count; i++) {
                        display(students[i]);
                    }
                }
                break;
            case 3: //Cap nhat
                
                if (count == 0) {
                    printf("Ko co sinh vien can cap nhat!\n");
                }
                else {
                  
                    printf("Nhap ma sinh vien can cap nhat: ");
                    scanf("%d", &id);

                    // tim kiem vi tri
                    index = search(students, count, id);

                    // kiem tra 
                    if (index == -1) {
                        printf("Không tim thay sinh vien co ma %d!\n", id);
                    }
                    else {
                        // cap nhat
                        update(&students[index]);

                        printf("Cap nhat thanh cong!\n");
                    }
                }
                break;
            case 4: // Thoát chuong trình
                printf("Da thoat chuong trinh!\n");
                break;
            default: 
                printf("Lua chon khong hop le, vui long nhap lai!\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

