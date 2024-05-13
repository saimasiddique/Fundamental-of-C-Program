#include<stdio.h>
int main(){
    int x,st;
    scanf("%d",&x);
// while(x!=0){
//     if(x>=3){
//         st+=(x/3);
//         x%=3;

//     }
//     else if(x>=2)
//     {
//        st+=(x/2);
//         x%=2; 
//     }
//     else{
//         st+=1;
//         x%=1;
//     }
// }
st=x/3+(x%3>0?1:0);
printf("%d\n",st);
 return 0;
}