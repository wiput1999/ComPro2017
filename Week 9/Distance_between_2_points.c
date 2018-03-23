#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double calculateDistance(Point p1, Point p2);

int main(void) {
    Point a, b;

    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);

    printf("Distance between two points (x1,y1) and (x2,y2) : %.2lf", calculateDistance(a, b));

    return 0;
}

double calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}