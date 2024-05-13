#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int n, sum = 0;
    scanf("%lld", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        // sum += arr[i];
    }
    for (long long int i = 0; i < n; i++)
    {

        sum += arr[i];
    }
    printf("%lld\n", abs(sum));
    return 0;
}