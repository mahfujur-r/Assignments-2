#include<stdio.h>
#include<math.h>
int main()
{
    double lambda, theta, d;

    printf("Enter the wavelength(nm):");
    scanf("%lf", &lambda);
    if(lambda<380||lambda>750)
    {
        printf("\nOut of the range. Please enter a valid number.\n");
        return 0;
    }
    lambda/=1000;

    printf("\nEnter the value of theta(degree):");
    scanf("%lf", &theta);
    double rad_theta=(theta*3.14159)/180;

    printf("\nEnter the slit gap(µm):");
    scanf("%lf", &d);

    int m=(int)((d*sin(rad_theta))/lambda);

    if(m>0)
    {
      printf("\n%d-th order maxima.", m);
    }else
    {
        printf("\nNo maxima observed.");
    }

    return 0;
}
