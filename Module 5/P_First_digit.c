#include<stdio.h>
int main(){

int a,b;
scanf("%d",&a);
b=a/1000;
if(b%2==0){
    printf("EVEN\n");
}
else{
    printf("ODD\n");
}
    return 0;
}