#include <stdio.h>

int main()
{
    int radius;
    float pie = 3.14;
    int decision;

    printf("please enter the radius of your circle: ");
    scanf("%d", &radius);

    printf("the area of your circle is: %f \n", pie * radius * radius);

    printf("Do You want To Find the the volume of a cylinder using the radius that you give above\n For yes press 1\n For No Press 2: ");
    scanf("%d", &decision);

    if (decision == 1)
    {
        int height;
        printf("please enter the height of the cylinder: ");
        scanf("%d", &height);

        printf("the volume of the circle is: %f", pie * radius * radius * height);

        return 0;
    }
}
