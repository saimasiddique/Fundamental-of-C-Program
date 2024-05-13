#include <stdio.h>
void odd_even()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("%d %d\n", even, odd);
}
int main()
{

    // int ar[n];
    odd_even();

    return 0;
}