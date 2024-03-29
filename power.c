#include "myMath.h"

double Exp(int x) {
    return Pow(e,x);
}

double Pow(double x, int y) {
    if (y==0) return 1;
    double ans = 1;
    int neg = false;
    if (y<0) {
        y = -1*y;
        neg=true;
    }
    while (y!=0) {
        ans = ans*x;
        --y;
    }
    if (neg) {
        ans = 1/ans;
    }
    return ans;
}
