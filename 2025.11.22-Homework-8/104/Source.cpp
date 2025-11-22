#include<stdio.h>

unsigned char Changer(unsigned char c);

int main(int argc, char** argv) {
	int c = 0;

	scanf_s("%c", &c);

	printf("%c", Changer(c));

	return 0;
}

unsigned char Changer(unsigned char c) {

	if (c < 96) {
		return c + 32;
	}
	else {
		return c - 32;
	}
}