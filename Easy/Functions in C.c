#include<stdio.h>
int max(int a,int b,int c,int d);
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    printf("%d",max(a,b,c,d));
    return 0;
}
int max(int a,int b,int c,int d)
{
    int m=0;
    if(m<a)
    m=a;
    if(m<b)
    m=b;
    if(m<c)
    m=c;
    if(m<d)
    m=d;
    return m;
}