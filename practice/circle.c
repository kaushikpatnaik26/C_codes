#include <stdio.h>
void AreaOfCircle(float radius)

{
    if (radius < 0)
    {
       printf("Invalid input");
        return;
    }
    float area = 0;
    area = 3.14 * radius * radius;
    printf("Area of the circle with radius %f is %f cm^2", radius, area);
}
    int main()
{
    float radius;
    printf("Enter radius in cm: \n");
    scanf("%f", &radius);
    AreaOfCircle(radius);
    return 0;
}
