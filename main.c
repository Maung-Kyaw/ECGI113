#include <stdio.h>
#include <stdlib.h>

int main()
{
   int w,h,a_rect;
   float a_tri;
   printf("Please input w :");
   scanf("%d",&w);
   printf("Please input h :");

   scanf("%d",&h);

   a_rect = w*h;
   a_tri = w*h*0.5;

   printf("\n%10s%10s%10s%10s\n","","width","height","area");
   printf("%-10s%10d%10d%10d\n","Rectangle",w,h,a_rect);
   printf("%-10s%10d%10d%10.2f\n","Triangle",w,h,a_tri);



   return 0;

}
