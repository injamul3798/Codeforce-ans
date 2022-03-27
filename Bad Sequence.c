#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i,j;
    if(strlen(str)%2!=0){
        printf("NO");
    }
    else{
        int xx=strlen(str);
        if(str[0]=='(' && str[xx-1] !=')' ){
            printf("NO");
        }

        else{
            printf("YES");
        }



    }


    printf("%d\n",strlen(str));

}
