#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    /*switch (b>0){
        case 1:printf("+");break;
    }*/

    if(a!=0 && b>0) printf("+");

    switch (b){
        case 1:printf("x");break;
        case 0:break;
        case -1:printf("-x");break;
        default: printf("%dx",b);
    }
    if((a!=0 || b!=0 )&& c>0) printf("+");

    switch (c){
        case 1:printf("1");break;
        case 0:break;
        case -1:printf("-1");break;
        default: printf("%d",c);
    }
    if(a==0 && b==0 && c==0 ){
        puts("");
    }
    else puts("=0");

    float sq=b*b-4*a*c;

    if(a==0){
        if(b!=0) printf("The answer is %.2f\n",-(float)c/b);
        else printf("No solution");

    }
    else{
        if(sq==0) printf("The answer is %.2f\n",(float)-b/2*a);
        else if(sq<0) printf("No solution!");
        else{
            x1=(-b+sqrt(b*b-4*a*c))/(2*a);
            x2=(-b-sqrt(b*b-4*a*c))/(2*a);
            printf("The value of x1 : %.2f\n",x1);
            printf("The value of x2 : %.2f\n",x2);
        }
    }
}
