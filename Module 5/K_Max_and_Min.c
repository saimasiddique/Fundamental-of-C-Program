#include<stdio.h>
int main(){

int a,b,c,mx,mn;
scanf("%d %d %d",&a,&b,&c);

if(a>=b && a>=c){
    mx=a;
    if(b<=c){
        mn=b;
    }
    else{
        mn=c;
    }
}
else if(b>=a && b>=c){
    mx=b;
    if(a<=c){
        mn=a;
    }
    else{
        mn=c;
    }
}
else if(c>=a && c>=b){
    mx=c;
    if(a<=b){
        mn=a;
    }
    else{
        mn=b;
    }
}
printf("%d %d\n",mn,mx);
    return 0;
}