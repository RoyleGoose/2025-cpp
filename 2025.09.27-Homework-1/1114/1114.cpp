#include<cstdio>

int main(int argc, char** argv) {

	int n;
	int k;

	scanf_s("%d %d", &n, &k);

	int t = n * k % 109;

	printf("%d", (t + 109) % 109 + 1);

	return 0;
}