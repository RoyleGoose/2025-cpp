#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char name[50];
	char surname[50];
	double m;
	double ph;
	double inf;
} Student;

int main(int argc, char** argv) {
	int n = 0;
	double m = 0;
	double ph = 0;
	double inf = 0;

	scanf_s("%d", &n);

	Student* students = (Student*)malloc(sizeof(Student) * n);


	if (students != NULL) {
		for (int g = 0; g < n; g++) {
			scanf_s("%49s", &students[g].name, sizeof(students[g].name));
			scanf_s("%49s", &students[g].surname, sizeof(students[g].surname));
			scanf_s("%lf %lf %lf", &students[g].m, &students[g].ph, &students[g].inf);

		}
	}

	for (int g = 0; g < n; g++) {
		m += students[g].m;
		ph += students[g].ph;
		inf += students[g].inf;
	}


	printf("\n%.2lf %lf %lf", m / n, ph / n, inf / n);

	free(students);

	return 0;
}