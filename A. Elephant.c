#include<stdio.h>

int main(){
   int n,t;
    scanf("%d",&n);
    int num=1;
    int i,count=0;
    int sum=0;
    if(n>=1 && n<=5){
        printf("%d",num);
    }

    else{
        for(i=5; i>=1; i--){
            sum+=i;
            count++;
            if(sum==n){
                break;
            }
        }
        printf("%d\n",count);
    }



}


