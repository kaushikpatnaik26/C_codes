#include <stdio.h>
#define PI 3.14
int main()
{
    double radius, area, circumference;
    int num_cisc;
    char circ_name;
    printf("enter radius: ");
    scanf("%lf", &radius);
    area = PI*(radius*radius);
    printf("area of circle %.2lf\n", area);
    circumference = 2*PI*radius;
    printf("circumference of circle %lf\n", circumference);
    return 0;
}
