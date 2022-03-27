#include<stdio.h>
#include<string.h>
int main(){
    int str1,str2,str3;
    scanf("%d%d%d",&str1,&str2,&str3);
    int num1;
    num1=str1*str2;
    if(num1>str3){
        printf("%d\n",str3);
    }
    if(num1==str3){
        printf("%d\n",str3);
    }
    if(num1<str3){
        printf("%d\n",num1);
    }
}

