#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (min > ar[i])
        {
            min = ar[i];
        }
    }
    int cnt = 0;

    for (int i=0;i<n;i++){
        if(ar[i]==min){
            cnt++;
        }
    }
    if(cnt%2){
        printf("Lucky\n");
    }
    else{
        printf("Unlucky\n");
    }

        return 0;
}