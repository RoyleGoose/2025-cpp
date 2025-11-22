#include<stdio.h>
#include<string.h>



int main(int argc, char** argv) {
	char s1[100] = "";
	int c = 0;

	fgets(s1, sizeof(s1), stdin);

	for (int g = 0; g < strlen(s1); g++) {
		if (s1[g] ==  ' ') {
			c++;
		}
	}
	if (c == 1) {
		printf("1");
	}
	else {
		printf("%d", c + 1);
	}
	

	return 0;
}

