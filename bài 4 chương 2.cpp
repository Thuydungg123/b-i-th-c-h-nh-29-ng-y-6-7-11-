#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char hoten[50];
    char ma[20];
    float diem1, diem2, diem3;
};

struct Node {
    struct SinhVien data;
    struct Node *next;
};

typedef struct Node Node;

int main() {
    Node *head = NULL;

    return 0;
}