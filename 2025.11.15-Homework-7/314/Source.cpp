#include <stdio.h>


void Han(int n, int from, int to, int p);


int main() {

    int n = 0;
    scanf_s("%d", &n);

    Han(n, 1, 2, 3);


    return 0;
}

void Han(int n, int from, int to, int p) {
    if (n == 1) {
        printf("Disk 1 move from %d to %d\n", from, to);
        return;
    }

    Han(n - 1, from, p, to);

    printf("Disk %d move from %d to %d\n", n, from, to);

    Han(n - 1, p, to, from);
}