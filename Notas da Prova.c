#include <stdio.h>
#include <conio.h>
int main()
{
    int marks,i;


    scanf("%d",&marks);

    if(marks==40){
        printf("E\n");
    }
    if(marks>=1 && marks<=35){
        printf("D\n");
    }
    if(marks>=36 && marks<=60){
        printf("C\n");
    }
    if(marks>=61 && marks<=85){
        printf("B\n");
    }
    if(marks>=86 && marks<=100){
        printf("A\n");
    }

    return 0;
}﻿
