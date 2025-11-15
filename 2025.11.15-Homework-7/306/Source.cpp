#include<stdio.h>

int min(int a, int b, int c, int d);

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int m = 0;

	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	m = min(a, b, c, d);

	printf("%d", m);

	return 0;
}

int min(int a, int b, int c, int d) {
	int s[] = { a, b, c, d };
	int el = a;
	for (int g = 0; g < 3; g++) {
		if (el > s[g]) {
			el = s[g];
		}
	}
	return el;
}
