#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double a;
    scanf("%lf", &a);
    int ans = ceil(a);
    printf("%d\n", ans);
    ans = floor(a);
    printf("%d\n", ans);
    ans = round(a);
    printf("%d\n", ans);
    double rt = sqrt(23.9993);
    printf("%lf\n", rt);
    int p = pow(9, 4);
    printf("%d\n", p);

    printf("%d", abs(-7));
    return 0;
}