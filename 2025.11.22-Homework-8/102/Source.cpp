#include<stdio.h>

#include<string.h>

bool IsDigit(unsigned char c);

int main(int argc, char** argv) {
	char c = 0;

	scanf_s("%c", &c);

	if (IsDigit(c)){
		printf("yes");
	}
	else {
		printf("no");
	}


	return 0;
}

bool IsDigit(unsigned char c) {
	char n[] = "0123456789";

	for (int g = 0; g < 10; g++) {
		if (c == n[g]) {
			return true;
		}
	}
	return false;
}