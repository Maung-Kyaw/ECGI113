#include <stdio.h>
#include <stdlib.h>
#define Size 5

int main()
{
    int i;
    int a[Size]={};

    for(i=0;i<Size;i++){
        printf("Input numbers %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<Size;i++){
        printf("%3d",a[i]);
    }
    int big=a[0];
    int small=a[0];
    for(i=1;i<Size;i++){
        if(big<a[i]) big=a[i];
        if(small>a[i]) small=a[i];
    }
    printf("\n\nThe biggest number is %d",big);
    printf("\n\nThe smallest number is %d\n",small);



    return 0;
}
