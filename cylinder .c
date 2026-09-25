#include <stdio.h>
#define PI 3.142

int main() {
    float radius=7;
    float height=10;
    float volume, surfaceArea;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    printf("\nVolume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}