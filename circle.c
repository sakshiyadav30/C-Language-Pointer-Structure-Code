#include <stdio.h>
#include <math.h>
struct Circle {
    float radius;
};
float calculateArea(struct Circle c) {
    return M_PI * c.radius * c.radius;
}
float calculatePerimeter(struct Circle c) {
    return 2 * M_PI * c.radius;
}
int main() {
    struct Circle circle1, circle2;
    printf("Sakshi Yadav\n");
    printf("Enter the radius of the first circle: ");
    scanf("%f", &circle1.radius);
    printf("Enter the radius of the second circle: ");
    scanf("%f", &circle2.radius);
    printf("\nCircle 1:\n");
    printf("Radius: %.2f\n", circle1.radius);
    printf("Area: %.2f\n", calculateArea(circle1));
    printf("Perimeter: %.2f\n", calculatePerimeter(circle1));
    printf("\nCircle 2:\n");
    printf("Radius: %.2f\n", circle2.radius);
    printf("Area: %.2f\n", calculateArea(circle2));
    printf("Perimeter: %.2f\n", calculatePerimeter(circle2));
    return 0;
}
