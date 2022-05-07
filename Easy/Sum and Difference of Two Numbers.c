#include<stdio.h>
int main ()
{
    int x,y;
    float a,b;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%f",&a);
    scanf("%f",&b);
    printf("%d %d\n",x+y,x-y);
    printf("%.1f %.1f",a+b,a-b);
}