#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//dinh nghia cau truc
struct Employee {
  int id; 
  char name[50]; 
  char position[50]; //chuc vu
  float salary; // luong
};

// kb mang luu tru
struct Employee employees[100];
//kb so lg nhan vien
int count = 0;

// Ham them nhan vien
void add_employee() {
  // Nhap thong tin
  printf("Nhap ma nhan vien: ");
  scanf("%d", &employees[count].id);
  printf("Nhap ten nhan vien: ");
  scanf("%s", employees[count].name);
  printf("Nhap chuc vu nhan vien: ");
  scanf("%s", employees[count].position);
  printf("Nhap luong nhan vien: ");
  scanf("%f", &employees[count].salary);
  // Tang so luong len 1
  count++;
  printf("Da them nhan vien moi thanh cong!\n");
}

// Ham xoa nhan vien theo ma
void delete_employee() {
  int id,i;
  printf("Nhap ma nhan vien can xoa: ");
  scanf("%d", &id);
  // Tim vi tri
  int index = -1;
  for ( i = 0; i < count; i++) {
    if (employees[i].id == id) {
      index = i;
      break;
    }
  }
  // khong tim thay
  if (index == -1) {
    printf("Khong tim thay nhan vien co ma %d!\n", id);
    return;
  }
  // tim thay
  for (i = index; i < count - 1; i++) {
    employees[i] = employees[i + 1];
  }
  // giam so luong di 1
  count--;
  printf("Da xoa nhan vien co ma %d thanh cong!\n", id);
}

// Ham hien thi
void display_employees() {
	int i;
  //ko co nhan vien
  if (count == 0) {
    printf("Danh sach nhan vien chua duoc nhap!\n");
    return;
  }
 //co nhan vien
  printf("Danh sach nhan vien:\n");
  printf("%-10s%-20s%-20s%-10s\n", "Ma NV", "Ten NV", "Chuc vu", "Luong");
  // in ra
  for (i = 0; i < count; i++) {
    printf("%-10d%-20s%-20s%-10.2f\n", employees[i].id, employees[i].name, employees[i].position, employees[i].salary);
  }
}

// Hàm sap xep
void sort_employees() {
	int i,j;
  // su dung thuat toan bubble sort
  for ( i = 0; i < count - 1; i++) 
    for (j = 0; j < count - i - 1; j++) {
      // neu nhan vien j luong cao hon nhan vien j+1
      if (employees[j].salary > employees[j + 1].salary) {
        // Hoan doi vi tri 2 nhan vien
        struct Employee temp = employees[j];
        employees[j] = employees[j + 1];
        employees[j + 1] = temp;
      }
    }
    printf("Da sap xep danh sach nhan vien theo luong tang dan!\n");
  } 
 
// ham hien thi cac chuc nang
void display_menu() {
  printf("=====Chuong trinh quan ly nhan su=====\n");
  printf("1. Them nhan vien\n");
  printf("2. Xoa nhan vien\n");
  printf("3. Hien thi danh sach nhan vien\n");
  printf("4. Sap xep danh sach nhan vien theo luong tang dan\n");
  printf("5. Thoat chuong trinh\n");
  printf("Nhap lua chon cua ban: ");
}

int main() {
  int choice; // KB bien chon
  //sd lap den khi thoat
  while (1) {  
    display_menu(); //hien thi cac chuc nang 
    scanf("%d", &choice);  
    switch (choice) {
      case 1:
        // them
        add_employee();
        break;
      case 2:
        // xoa
        delete_employee();
        break;
      case 3:
        // hien thi ds
        display_employees();
        break;
      case 4:
        // sap xep
        sort_employees();
        break;
      case 5:
        // thoat ct
        printf("Cam on ban da su dung chuong trinh!\n");
        exit(0);
        break;
      default:   
        printf("Lua chon khong hop le, vui long nhap lai!\n");
        break;
    }
  }
  return 0;
}
