#include <stdio.h>
int main()
{
    int a = 0, i,j;
    for (i = 0;i < 5; i++)
    { 
        // continue;
        // a++;
        printf("%d\n",i);
        
    }
    for(j=5-1;j>=0;j-=1)
    {
        printf("\t%d\n",j);
    }
    // printf("%d %d",i,a);
    return 0;
}