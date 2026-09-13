#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    printf("Root 1 = %.2lf\n", root1);
    printf("Root 2 = %.2lf\n", root2);

    return 0;
}
