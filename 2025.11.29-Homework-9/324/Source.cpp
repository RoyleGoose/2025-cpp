#include<stdio.h>
#include<stdlib.h>
#include<cmath>

typedef struct {
	double x;
	double y;
} Point;

int main(int argc, char** argv) {
	int n = 0;
	double x = 0;
	double y = 0;
	double d = 0;

	scanf_s("%d", &n);

	Point* points = (Point*)malloc(sizeof(Point) * n);


	if (points != NULL) {
		for (int g = 0; g < n; g++) {
			scanf_s("%lf %lf", &points[g].x, &points[g].y);
		}
	}

	for (int g = 0; g < n; g++) {
		for (int k = 0; k < n; k++) {
			if (sqrt((points[g].x - points[k].x) * (points[g].x - points[k].x) + (points[g].y - points[k].y) * (points[g].y - points[k].y)) > d) {
				d = sqrt((points[g].x - points[k].x) * (points[g].x - points[k].x) + (points[g].y - points[k].y) * (points[g].y - points[k].y));
			}
		}
	}


	printf("%lf", d);

	free(points);

	return 0;
}