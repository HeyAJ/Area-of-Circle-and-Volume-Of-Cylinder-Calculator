# include <stdio.h>

int main() {
    int radius;
    float pie = 3.14;

    printf("please enter the radius of your circle: ");
    scanf("%d", &radius);

    printf("the area of your circle is: %f \n", pie * radius * radius);

    int height;
    printf("please enter the height of the cylinder: ");
    scanf("%d", &height);

    printf("the volume of the circle is: %f", pie * radius * radius * height);

    return 0;

}
