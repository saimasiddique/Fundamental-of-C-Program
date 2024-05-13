#include<stdio.h>
int fun(char s[],int i){
    if(s[i]=='\0') return 0;
    int l = fun(s,i+1);
    return l+1;
}
int main(){
    char str[10];
    gets(str);
    int len = fun(str,0);
    printf("%d",len);
 return 0;
}