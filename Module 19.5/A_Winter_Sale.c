#include <stdio.h>
int main()
{
    double x, p_dis;
    scanf("%lf %lf", &x, &p_dis);
    double p;
    p = (p_dis * 100) / (100 - x);
    printf("%.2lf\n", p);
    return 0;
}