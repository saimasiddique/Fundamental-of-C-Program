#include <stdio.h>
int main()
{
    int n, t, cnt, largest;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    largest = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > largest)
        {
            largest = ar[i];
        }
    }
    // printf("%d", largest);
    int freq[largest + 1];
    for (int i = 0; i <= largest; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[ar[i]]++;
    }
    scanf("%d", &t);
    cnt = 0;
    int duplicate = 0, uniq = 0;
    for (int i = largest; i >= 0; i--)
    {

        if (freq[i] > 0)
        {
            cnt++;
        }
        if (cnt == t)
        {
            printf("%dth largest value is %d\n", t, i);
            break;
        }
    }
    for (int i = 0; i < largest + 1; i++)
    {
        if (freq[i] == 1)
        {
            uniq++;
            // printf("%d ", i);
        }
        else if (freq[i] > 1)
        {
            duplicate++;
        }
    }
    printf("Duplicate: %d Unique: %d\n", duplicate, uniq);
    return 0;
}