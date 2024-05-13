// Problem 03- take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.

#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a%2==0){
    printf("even");
}
else{
    printf("odd");
}


    return 0;
}