#include<stdio.h>
#include<math.h>
void update(int *a,int *b);
int main ()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    update(&x,&y);
    printf("%d\n%d",x,y);
    return 0;
}
void update(int *a,int *b)
{
    int x=*a;
    *a= *a + *b;
    *b= abs(x-*b);
}