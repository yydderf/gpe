#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, grid, dot, strip;
    while (scanf("%lf", &a) == 1) {
        grid = a * a - (a * a * M_PI / 6.0) - (sqrt(3.0) * a * a / 4.0);
        dot = a * a - (a * a * M_PI / 4.0) - (2 * grid);
        strip = a * a - grid * 4 - dot * 4;
        printf("%.3lf %.3lf %.3lf\n", strip, dot * 4, grid * 4);
    }
    return 0;
}
