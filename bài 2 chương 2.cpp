#include <stdio.h>

int main() {
    int m, n, i, j;
    float a[100][100], *p;

    p = &a[0][0];

    printf("Nhap so hang m: ");
    scanf("%d", &m);

    printf("Nhap so cot n: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", p + i * n + j);
        }
    }

    printf("Mang vua nhap la:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2f\t", *(p + i * n + j));
        }
        printf("\n");
    }

    return 0;
}