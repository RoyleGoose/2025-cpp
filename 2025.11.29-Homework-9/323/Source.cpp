#include<stdio.h>
#include<stdlib.h>

typedef struct {
	double x;
	double y;
} Point;

int main(int argc, char** argv) {
	int n = 0;
	double x = 0;
	double y = 0;
	double sx = 0;
	double sy = 0;

	scanf_s("%d", &n);

	Point* points = (Point*)malloc(sizeof(Point) * n);


	if (points != NULL) {
		for (int g = 0; g < n; g++) {
			scanf_s("%lf %lf", &points[g].x, &points[g].y);
		}
	}

	for (int g = 0; g < n; g++) {
		sx += points[g].x;
		sy += points[g].y;
	}


	printf("%lf %lf", sx / n, sy / n);

	free(points);

	return 0;
}