#include <stdio.h>

struct SinhVien {
    char hoten[50];
    char ma[20];
    float diem1, diem2, diem3;
};

int main() {
    struct SinhVien sv[100], *p;
    int n, i;

    p = sv;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i + 1);

        printf("Ho ten: ");
        fgets((p+i)->hoten, 50, stdin);

        printf("Ma sinh vien: ");
        fgets((p+i)->ma, 20, stdin);

        printf("Diem 1: ");
        scanf("%f", &(p+i)->diem1);

        printf("Diem 2: ");
        scanf("%f", &(p+i)->diem2);

        printf("Diem 3: ");
        scanf("%f", &(p+i)->diem3);
        getchar();
    }

    printf("\nDANH SACH SINH VIEN\n");

    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("Ho ten: %s", (p+i)->hoten);
        printf("Ma sinh vien: %s", (p+i)->ma);
        printf("Diem 1: %.2f\n", (p+i)->diem1);
        printf("Diem 2: %.2f\n", (p+i)->diem2);
        printf("Diem 3: %.2f\n", (p+i)->diem3);
    }

    return 0;
}