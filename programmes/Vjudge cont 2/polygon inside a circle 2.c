#include <stdio.h>
#include <math.h>

int main() {
    double r, n;
    while(scanf("%lf %lf", &r, &n) == 2) {
        printf("%.3lf\n", n*r*r*sin(2*acos(-1)/n)/2);
        // acos(-1)=pie redi =180degree
        //acos() ==arc cos() ==cos inverse()
    }
    return 0;
}
