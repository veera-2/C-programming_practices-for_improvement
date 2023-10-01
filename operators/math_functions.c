#include <stdio.h>
#include <math.h>  //this header is use for maths functions

int main()
{
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("%lf\n", A);  //sqrt
    printf("%lf\n", B);  //pow
    printf("%d\n", C);   //round
    printf("%d\n", D);   //ceil
    printf("%d\n", E);   //floor
    printf("%lf\n", F);  //fabs
    printf("%lf\n", G);   //log
    printf("%lf\n", H);   //sin
    printf("%lf\n", I);   //cos
    printf("%lf\n", J);   //tan

    return 0;
}