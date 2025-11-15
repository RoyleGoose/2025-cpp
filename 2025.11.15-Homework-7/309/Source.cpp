#include<stdio.h>

int Election(int x, int y, int z);

int main(int argc, char** argv)
{
	int x = 0;
	int y = 0;
	int z = 0;

	scanf_s("%d %d %d", &x, &y, &z);

	printf("%d", Election(x, y, z));

	return 0;
}

int Election(int x, int y, int z) {
	int s[] = { x, y, z };
	int c = 0;
	for (int g = 0; g < 3; g++) {
		if (s[g] == 1) {
			c++;
		}
	}
	if (c == 2) {
		return 1;
	}
	else {
		return 0;
	}
}
