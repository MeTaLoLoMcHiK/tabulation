#include <stdio.h>
#include <math.h>

#define FUNC(x) ((x) <= -3 ? (sin(3 * (x))) / (2 * (x) + 3) : \
                 ((x) > -3 && (x) <= 3 ? ((x) + (x) * sqrt(fabs((x) - 3))) : \
                 ((x) > 3 ? (x * sin(3 * (x))) : 0)))

int main() {
    double x, h = 0.1;  
    double a = -3, b = 3;

    printf("x\t\tf(x)\n");
    printf("---------------------\n");

    for (x = a; x <= b; x += h) {
        printf("%lf\t%lf\n", x, FUNC(x));
    }

    return 0;
}
