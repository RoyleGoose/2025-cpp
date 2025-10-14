#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    double a;
    double b; 
    double c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (c == 0 && b != 0) {
            printf("1\n");
            printf("0\n");
        }
        else if (c == 0 && b == 0) {
            printf("-1\n");
        }
        else {
            printf("1\n");
            printf("%lf\n", (-c) / b);
        }
    }
    else {
        double d = b * b - 4 * a * c;
        if (d < 0) {
            printf("-1\n");
        }
        else if (d == 0) {
            double x = (-b + sqrt(d)) / (2 * a);
            printf("%lf\n", x);
            printf("%lf\n", x);
        }
        else {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            printf("2\n");
            printf("%lf\n", x1);
            printf("%lf\n", x2);
        }
    }

    return 0;
}
