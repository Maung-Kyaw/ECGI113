#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*printf("Hello world!\n\n\n");

    int a,b,c;
    float x1,x2;
    printf("enter your numbers(a,b,c): ");
    scanf("%d,%d,%d",&a,&b,&c);
    x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    printf("x1=%.2f\n",x1);
    printf("x2=%.2f",x2);*/
    int x,y,z;
    int max;
    int min;
    printf("Input 3 numbers (x,y,z) :");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y && x>z) max=x;
    else if(y>z) max=y;
    else max=z;
    printf("max=%d\n",max);

    if(x<y && x<z) min=x;
    else if(y<z) min=y;
    else min=z;
    printf("min=%d\n",min);






    return 0;



}
