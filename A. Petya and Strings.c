#include<stdio.h>
#include <string.h>
int main(){
    char a[101],b[101];
    scanf("%s%s",&a,&b);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
        if (a[i] > b[i])
        {
            printf("1");
            return 0;
        }
        if (a[i] < b[i])
        {
            printf("-1");
            return 0;
        }
    }

   printf ("0" );

}

