// Problem 05- Suppose your friend has told you that she will buy a Gucci Bag if she has 10 thousand taka or more. Otherwise if she has 5 thousand taka or more, she will buy a Levis Bag. Otherwise she will buy Something from New Market. She also told you that, if she could buy the Gucci bag and she has more than 20 thousand taka she will also buy a Gucci Belt.

// Now, if you know the amount of money she has, can you tell which item/items she will buy?

#include<stdio.h>
int main(){

int cash;
scanf("%d",&cash);
if(cash>=10000){
    printf("Gucci Bag\n");
    if(cash>20000){
        printf("Gucci Belt");
    }
}
else if(cash>=5000){
    printf("Levish Bag\n");
}
else{
    printf("Something");
}
    return 0;
}