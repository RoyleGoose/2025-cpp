#include<stdio.h>
#include<cmath>
//non
#define SIZE 1000
#define MAX_DIFFRENCE 1001

int main(int argc, char** argv) {

	int n = 0;
	int s[SIZE] = { 0 };
	int x = 0;
	int mr = MAX_DIFFRENCE;
	int a = 0;

	scanf_s("%d", &n);

	for (int g = 0; g < n; g++) {
		scanf_s("%d", (s + g));
	}

	scanf_s("%d", &x);

	for (int g = 0; g < n; g++) {
		if (mr > abs( *(s + g) - x)) {
			mr = abs( *(s + g) - x);
			a = *(s + g);
		}
	}

	printf("%d", a);

	return 0;
}