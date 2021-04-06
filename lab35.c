#include <stdio.h>
int main()
{
    float length, breadth, side, area, radius, perimeter;
    int code;
    printf("AREA OF DIFFERENT GEOMETRICAL SHAPES\n");
    printf(" 1 --> Rectangle Area\n");
    printf(" 2 --> Square Area\n");
    printf(" 3 --> Circle Area\n");
    printf(" 4 --> Square perimeter\n");
    printf(" 5 --> Rectangle perimeter\n");
    printf(" 6 --> Circle perimeter\n");
    printf("Enter the Figure code\n");
    scanf("%c", &code);
    switch(code)
    {
    // Case for finding area of rectangle
    case '1':
        printf("Enter length of Rectangle\n");
        scanf("%f", &length);
        printf("Enter breadth of Rectangle\n");
        scanf("%f", &breadth);
        area = length*breadth;
        printf("Area of a Rectangle = %f\n", area);
        break;
    // Case for finding area of square
    case '2':
        printf("Enter the side of Square\n");
        scanf("%f", &side);
        area = side * side;
        printf("Area of a Square=%f\n", area);
        break;
    // Case for finding area of circle
    case '3':
        printf("Enter the radius of Circle\n");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of a Circle = %f\n", area);
        break;
    case '4':
        printf("Enter the side of Square\n");
        scanf("%f", &side);
        perimeter = 4*side;
        printf("Perimeter of Square= %f\n", perimeter);
        break;
    case '5':
        printf("Enter length and breadth of Rectangle\n");
        scanf("%f%f", &breadth, &length);
        perimeter = 2 * (breadth + length);
        printf("Perimeter of rectangle is = %f", perimeter);
        break;
    case '6':
        printf("Enter the radius of the circle\n");
        scanf("%f", &radius);
        perimeter = 2 * (22 / 7) * radius;
        printf("Perimeter of circle is = %f", perimeter);
        break;

    /* if code doesn't match any case */
    default:
        printf("Error, Thank You");
    }
    return 0;
}
