#include <stdio.h>
#include "myMath.h"

int main() {
    double x=0;
    printf("enter a real number: ");
    scanf("%lf", &x);
    printf(" when x=%0.4lf:\n", x);
    double f1 = add(Exp((int) x), sub(Pow(x, 3), 2));
    double f2 = add(mul(x, 3), mul(Pow(x, 2), 2));
    double f3 = div(mul(Pow(x, 3), 4), sub(5, mul(x,2)));
    printf("f(x)=e^x+x^3-2 equals: %0.4lf\n", f1);
    printf("f(x)=3x+2x^2 equals: %0.4lf\n", f2);
    printf("f(x)=(4x^3)/5-2x equals: %0.4lf\n", f3);
    return 0;
}