//Md.Injamul Haque
//BSc in CSE, DIU
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    int t;
    scanf("%d",&t);
    int k;
    int count=0,j;
    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        int array[n];
        for(i = 0; i < n; i++)
        {
            scanf("%d",&array[i]);
        }
        
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(array[i] == array[j] && i != j)
                    break;
            }
            if(j == n )
            {
                printf("%d\n",i+1);
                count++;
 
            }
        }
       /* if(count==t){
            break;
        }*/
    }
    //printf("%d\n",count);
    return 0;
}
