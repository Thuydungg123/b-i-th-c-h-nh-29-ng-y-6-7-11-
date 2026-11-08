#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char hoten[30];
    int masv;
    float d1, d2, d3;
} Data;

typedef struct tagNode {
    Data infor;
    struct tagNode *link;
} Node;

typedef struct {
    Node *pHead;
    Node *pTail;
    int spt;
} LList;

// Khoi tao danh sach rong
void initList(LList *L) {
    L->pHead = NULL;
    L->pTail = NULL;
    L->spt = 0;
}

// Kiem tra danh sach rong
int emptyList(LList L) {
    return (L.spt == 0);
}

// Them nut vao dau danh sach
void insert_Head(LList *L, Data x) {
    Node *pp = (Node*)malloc(sizeof(Node));
    pp->infor = x;
    pp->link = L->pHead;

    if (emptyList(*L)) {
        L->pTail = pp;
    }

    L->pHead = pp;
    L->spt++;
}

// Them nut vao cuoi danh sach
void insert_Tail(LList *L, Data x) {
    Node *pp = (Node*)malloc(sizeof(Node));
    pp->infor = x;
    pp->link = NULL;

    if (emptyList(*L)) {
        L->pHead = pp;
        L->pTail = pp;
    } else {
        L->pTail->link = pp;
        L->pTail = pp;
    }

    L->spt++;
}

// Nhap thong tin sinh vien
void nhap(Data *x) {
    printf("Nhap ma SV (0 de dung): ");
    scanf("%d", &x->masv);

    if (x->masv > 0) {
        printf("Nhap ho ten: ");
        scanf(" %29[^\n]", x->hoten);

        printf("Nhap diem 1: ");
        scanf("%f", &x->d1);

        printf("Nhap diem 2: ");
        scanf("%f", &x->d2);

        printf("Nhap diem 3: ");
        scanf("%f", &x->d3);
    }
}

// In thong tin sinh vien
void in(Data x) {
    printf("Ten: %s, Ma: %d, Diem 1: %.2f, Diem 2: %.2f, Diem 3: %.2f\n",
           x.hoten, x.masv, x.d1, x.d2, x.d3);
}

// Duyet danh sach
void processList(LList L) {
    Node *pp = L.pHead;

    while (pp != NULL) {
        in(pp->infor);
        pp = pp->link;
    }
}

// Chuong trinh chinh
int main() {
    LList L;
    Data x;
    int kt = 0, chon;

    initList(&L);

    do {
        printf("\n===== CHUONG TRINH DSLK DON SV =====\n");
        printf("1. Them nut vao dau danh sach\n");
        printf("2. Them nut vao cuoi danh sach\n");
        printf("9. Duyet danh sach\n");
        printf("0. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                nhap(&x);
                if (x.masv > 0)
                    insert_Head(&L, x);
                break;

            case 2:
                nhap(&x);
                if (x.masv > 0)
                    insert_Tail(&L, x);
                break;

            case 9:
                processList(L);
                break;

            case 0:
                printf("Bye bye\n");
                kt = 1;
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (kt == 0);

    return 0;
}