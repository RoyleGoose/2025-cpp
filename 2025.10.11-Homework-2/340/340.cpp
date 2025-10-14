#include <stdio.h>

int main(int argc, char** argv) {
    int a1;
    int b1;
    int c1;
    int a2;
    int b2;
    int c2;
    int v1;
    int v2;

    scanf_s("%d %d %d", &a1, &b1, &c1);
    scanf_s("%d %d %d", &a2, &b2, &c2);

    
    if (a1 <= b1 && b1 <= c1) {
        a1 = a1; b1 = b1; c1 = c1;
    }
    else if (a1 <= c1 && c1 <= b1) {
        int t1 = b1; b1 = c1; c1 = t1;
    }
    else if (b1 <= a1 && a1 <= c1) {
        int t1 = a1; a1 = b1; b1 = t1;
    }
    else if (b1 <= c1 && c1 <= a1) {
        int t1 = a1; a1 = b1; b1 = c1; c1 = t1;
    }
    else if (c1 <= b1 && b1 <= a1) {
        int t1 = a1; a1 = c1; c1 = t1;
    }
    else {
        int t1 = a1; a1 = c1; c1 = b1; b1 = t1;
    }

    
    if (a2 <= b2 && b2 <= c2) {
        a2 = a2; b2 = b2; c2 = c2;
    }
    else if (a2 <= c2 && c2 <= b2) {
        int t2 = b2; b2 = c2; c2 = t2;
    }
    else if (b2 <= a2 && a2 <= c2) {
        int t2 = a2; a2 = b2; b2 = t2;
    }
    else if (b2 <= c2 && c2 <= a2) {
        int t2 = a2; a2 = b2; b2 = c2; c2 = t2;
    }
    else if (c2 <= b2 && b2 <= a2) {
        int t2 = a2; a2 = c2; c2 = t2;
    }
    else {
        int t2 = a2; a2 = c2; c2 = b2; b2 = t2;
    }

    v1 = a1 * b1 * c1;
    v2 = a2 * b2 * c2;

    if (v1 == v2) {
        if (a1 == a2 && b1 == b2 && c1 == c2)
            printf("Boxes are equal\n");
        else
            printf("Boxes are incomparable\n");
    }
    else if (v1 > v2 && a1 >= a2 && b1 >= b2 && c1 >= c2) {
        printf("The first box is larger than the second one\n");
    }
    else if (v1 < v2 && a1 <= a2 && b1 <= b2 && c1 <= c2) {
        printf("The first box is smaller than the second one\n");
    }
    else {
        printf("Boxes are incomparable\n");
    }

    return 0;
}
