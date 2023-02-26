#include <stdio.h>
#include <stdlib.h>

int main() {

    double b, h, p, area, allotment;

    printf("Insert the length of the area: ");
    scanf("%lf", &b);
    printf("Insert the width of the area: ");
    scanf("%lf", &h);
    printf("Insert the price of the m^2 of the allotment: ");
    scanf("%lf", &p);

    area = b*h;
    allotment = area*p;

    printf("Area of the allotment: %.2lf", area);
    printf("\nPrice of the allotment: %.2lf", allotment);

    return 0;
}
