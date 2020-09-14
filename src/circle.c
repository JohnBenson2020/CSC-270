#include <stdio.h>

#define PI 3.1415926
float circumference, area, diameter, radius;

float calculateDiameter(float radius)
{
    diameter = radius * 2;
    return diameter;
}

float calculateArea(float radius)
{
    area = PI * (radius * radius);
    return area;
}

float calculateCircumference(float radius)
{
    circumference = 2 * PI * radius;
    return circumference;
}

int main(void)
{
    // Input.
    printf("Enter radius: ");
    scanf("%f", &radius);

    if(radius < 0)
    {
        printf("Invalid radius. Must be greater than zero.\n");
        return 1;
    }
    else
    {
        diameter = calculateDiameter(radius);
        area = calculateArea(radius);
        circumference = calculateCircumference(radius);

        printf("A circle with radius %0.3f:\n"
                    "\tDiameter: %0.3f\n"
                    "\tArea: %0.3f\n"
                    "\tCircumference: %0.3f\n", radius, diameter, area, circumference);
        return 0;
    }
}
