#include <stdio.h>

void merge(int a[], int l, int mid, int h)
{
    // creating temp arrays
    int left = mid - l + 1;
    int right = h - mid;
    int la[left], ra[right];
    for (int i = 0; i < left; i++)
    {
        la[i] = a[l + i];
    }
    for (int i = 0; i < right; i++)
    {
        ra[i] = a[mid + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < left && j < right)
    {
        if (la[i] <= ra[j])
        {
            a[k] = la[i];
            i++;
        }
        else
        {
            a[k] = ra[j];
            j++;
        }
        k++;
    }
    while (i < left)
    {
        a[k] = la[i];
        i++;
        k++;
    }
    while (j < right)
    {
        a[k] = ra[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);

        merge(a, l, mid, h);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int low = 0, high = n - 1;

    mergeSort(ar, low, high);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}