#include<stdio.h>

unsigned char ToUpper(unsigned char c);

int main(int argc, char** argv) {
	int c = 0;

	scanf_s("%c", &c);

	printf("%c", ToUpper(c));

	return 0;
}

unsigned char ToUpper(unsigned char c) {

	if (c < 96) {
		return c;
	}
	else {
		return c - 32;
	}
}