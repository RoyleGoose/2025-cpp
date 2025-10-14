#include<cstdio>

int main(int argc, char** argv) {
	int n;

	scanf_s("%d", &n);

	if (n == 1) {
		printf("0");
	}
	else if (n % 2 == 0) {
		printf("%d", n / 2);
	}
	else {
		printf("%d", n);
	}

	return 0;
}