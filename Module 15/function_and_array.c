#include <stdio.h>
void fun(double *ar, int n) // void fun(double ar[], int n) evabeo likhtey pari
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf ", ar[i]);
    }
}
int main()
{
    double ar[] = {44.24, 8.23, 7.923, 10.4666, 32.621};
    int sz = sizeof(ar) / sizeof(double);
    fun(ar, sz);
    return 0;
}