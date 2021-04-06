#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main(){
    char purpose;
    float value1, value2;
    printf("Enter the mode of operation.\n 1.Perimeter of square.\n 2.Perimeter of rectangle.\n 3.Perimeter of circle.\n 4.Area of square.\n 5.Area of rectangle.\n 6.Area of circle.\n\n");
    scanf("%c", &purpose); //It will scan the operater entered by user.

    switch(purpose) //Switch-Case Function used.
    {
        case'1':
            printf("Enter values of the square:\n");
            scanf("%f", &value1);
            printf("Perimeter of square = %f", 4*value1);
        case'2':
            printf("\nEnter values of the rectangle:\n");
            scanf("%f %f", &value1, &value2);
            printf("Perimeter of rectangle = %f", 2*(value1+value2));
        case'3':
            printf("\nEnter values of the circle:\n");
            scanf("%f", &value1);
            printf("Perimeter of circle = %f", ((2*22*value1)/7));
        case'4':
            printf("\nEnter values of the square:\n");
            scanf("%f", &value1);
            printf("Area of square = %f", value1*value1);
        case'5':
            printf("\nEnter values of the rectangle:\n");
            scanf("%f %f", &value1, &value2);
            printf("Area of rectangle = %f", value1*value2);
        case'6':
            printf("\nEnter values of the circle:\n");
            scanf("%f", &value1);
            printf("Area of circle = %f", ((22*value1*value1)/7));
        default:
            printf("\nError eccoured, Please input the values correctly!");
    }
    return 0;
}
