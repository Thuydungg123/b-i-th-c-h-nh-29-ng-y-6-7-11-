#include <stdio.h>

int main() {
    int n, i;
    float a[100], *p;

    p = a;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", p + i);
    }

    printf("Mang vua nhap la:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(p + i));
    }

    return 0;
}