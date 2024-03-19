/*  Calculate the area of shapes like rectangle, triangle, and circle.*/
#include <stdio.h>
#include <math.h>
#define pi 3.14159265359
int main()
{
    int ch;
    float area, slant_height, height, breadth, radii, base, side, length;
    while (1)
    {
        printf("Enter 1 : Rectangle\nEnter 2 : Triangle\nEnter 3 : Circle\nEnter 4 : Square\nEnter 5 : Cylinder\nEnter 6 : Cube\nEnter 7 : Cuboid\nEnter 8 : Sphere\nEnter 9 : Hemisphere\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the length  and breadth\n ");
            scanf("%f%f", &length, &breadth);
            area = length * breadth;
            break;

        case 2:
            printf("Enter the height and base\n");
            scanf("%f%f", &height, &base);
            area = (base * height) / 2.0;
            break;

        case 3:
            printf("Enter the radius\n");
            scanf("%f", &radii);
            area = pi * pow(radii, 2);
            break;

        case 4:
            printf("Enter the side\n");
            scanf("%f", &side);
            area = pow(side, 2);
            break;

        case 5:
            printf("Enter the height and radius\n");
            scanf("%f%f", &height, &radii);
            area = 2 * pi * radii * (height + radii);
            break;

        case 6:
            printf("Enter the side\n");
            scanf("%f", &side);
            area = pow(side, 3);
            break;

        case 7:
            printf("Enter the length , breadth and height\n");
            scanf("%f%f%f", &length, &breadth, &height);
            area = length * breadth * height;
            break;

        case 8:
            printf("Enter the radius\n");
            scanf("%f", &radii);
            area = 4 * pi * pow(radii, 2);
            break;

        case 9:
            printf("Enter the radius\n");
            scanf("%f", &radii);
            area = 3 * pi * pow(radii, 2);
            break;

        default:
            printf("Invalid\n");
            break;
        }
        printf("AREA : %f square units\n", area);
    }
    return 0;
}