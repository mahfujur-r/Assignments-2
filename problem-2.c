#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main() {
    double theta = 45.0;
    double sin_theta = sin(theta * (PI / 180.0));

    double ratio = 1.0 / sin_theta;

    printf("The ratio of slit width to wavelength is: %.2f\n", ratio);

    return 0;
}
