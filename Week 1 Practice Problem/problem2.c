// Problem 02- Take two integer values as input and show the summation, subtraction, multiplication and division 

#include<stdio.h>
int main(){

long long int a,b;
scanf("%lld %lld",&a,&b);
printf("%lld + %lld = %lld\n",a,b,a+b);
// printf("%lld - %lld = %lld\n",a,b,a-b);
printf("%lld * %lld = %lld\n",a,b, a*b);
printf("%lld - %lld = %lld\n",a,b,a-b);
// printf("%lld / %lld = %.2f\n",a,b,a*1.0/b);

    return 0;
}