#include<stdio.h>

int Fac(int n);
int Bin(int n, int k);

int main(int argc, char** argv) {
	int n = 0;
	int k = 0;

	scanf_s("%d %d", &n, &k);
	printf("%d", Bin(n, k));

	return 0;
}

int Fac(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * Fac(n - 1);
}

int Bin(int n, int k) {
	return Fac(n) / (Fac(k) * Fac(n - k));
}