#include<stdio.h>
void fun(int a[],int n,int i){
    if(i==n)return;
    printf("%d\n",a[i]);
    fun(a,n,i+1);
}

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    fun(ar,n,0);
 return 0;
}