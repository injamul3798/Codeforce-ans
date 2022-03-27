#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    char ch[100001];
    scanf("%d",&n);
    scanf("%s",&ch);
    int count=0,xx=0;
    for(i=0;i<strlen(ch);i++){

        if(ch[i]=='A'){
            count++;
        }
        else if(ch[i]=='D'){
            xx++;
        }
    }
    if(count==xx){
         printf("Friendship\n");
    }

    else if(count>xx){
        printf("Anton\n");
    }

    else if(count<xx) {
        printf("Danik\n");
    }

   count=0,xx=0;

}

