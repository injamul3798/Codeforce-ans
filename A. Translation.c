#include<stdio.h>
#include <string.h>
int main(){
    char str1[101],str[101];
    scanf("%s%s",&str1,&str);

    if(strcmp((strrev(str1)), str)==0){
        printf("YES\n");
    }
    else{
         printf("NO\n");
    }
}

