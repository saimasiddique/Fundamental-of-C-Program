#include <stdio.h>
int main()
{
    char a[6];
    scanf("%s", a); // scanf kono space pele input neya bondho korey dey
    // windows fault- string size er cheye extra memory allocate kore, size joto tar cheye beshi access korey. Linux/online e ata segmentation error dekhay kintu windows e kono error dekhay na
    // int sz = sizeof(a) / sizeof(char);
    // printf("%d\n", sz);
    printf("%s", a);
    return 0;
}