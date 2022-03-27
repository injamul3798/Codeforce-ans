#include <stdio.h>

int main(){
    int marks;


    scanf("%d",&marks);

    if(marks==0){
        printf("E\n");
    }
    else if(marks>=1 && marks<=35){
        printf("D\n");
    }
    else if(marks>=36 && marks<=60){
        printf("C\n");
    }
    else if(marks>=61 && marks<=85){
        printf("B\n");
    }
    else {
        printf("A\n");
    }

}

