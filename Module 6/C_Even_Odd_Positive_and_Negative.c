#include<stdio.h>
int main(){
    int n,vl,ev=0,odd=0,ps=0,neg=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
    scanf("%d",&vl);
    if(vl%2==0){
        ev++;
    }
    else{
        odd++;
    }

    if(vl>0){
        ps++;
    }
    else if(vl<0){
        neg++;
    }
    
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",ev,odd,ps,neg);
 return 0;
}