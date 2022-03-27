#include<stdio.h>
int main(){
    int nn,aa,bb,i;
    scanf("%d",&nn);
    int cnt;
    for(i=1;i<=nn;i++){
        cnt=1;
        scanf("%d%d",&aa,&bb);
        cnt=aa*bb;
        printf("%d\n",cnt);
    }
}
