#include<stdio.h>
#include<string.h>



int main(int argc, char** argv) {
	char s1[100] = "";
	char s2[100] = "";


	fgets(s1, sizeof(s1), stdin);
	fgets(s2, sizeof(s2), stdin);

	if (strcmp(s1, s2) == NULL) {
		printf("yes");
	}
	else {
		printf("no");
	}

	return 0;
}

