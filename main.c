#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float x1,x2;

    printf("Enter your coefficieants:");
    scanf("%d %d %d",&a,&b,&c);
    puts("Roots of the equation");

    switch (a){
        case 1:printf("x^2");break;
        case 0:break;
        case -1:printf("-x^2");break;
        default: printf("%dx^2",a);
    }
    switch (b>0){
        case 1:printf("+");break;
    }

    switch (b){
        case 1:printf("x");break;
        case 0:break;
        case -1:printf("-x");break;
        default: printf("%dx",b);
    }
    switch (c>0){
        case 1:printf("+");break;

    }
    switch (c){
        case 1:printf("1");break;
        case 0:break;
        case -1:printf("-1");break;
        default: printf("%dx",c);
    }





}
