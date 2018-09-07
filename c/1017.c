#include <stdio.h>
int main ()
{
    double x, y, litros;
    scanf("%lf", &x);
    scanf("%lf", &y);
    litros = ( y / 12.0) * x;
    printf("%.3lf\n", litros);
    return 0;
}