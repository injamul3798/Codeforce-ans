#include<stdio.h>

int main(){
   int n,t;
    scanf("%d%d",&n,&t);
    int arr[100];
    int i,count=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
       if(arr[i]>=arr[t-1] && arr[i]>0) {
        count++;
       }

    }
    printf("%d\n",count);



}

