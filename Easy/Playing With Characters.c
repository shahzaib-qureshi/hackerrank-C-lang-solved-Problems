#include<stdio.h>
int main()
{
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("\n");
    scanf("%[^\n]%*c",s);
    scanf("\n");
    gets(sen);
    printf("%c\n",ch);
    puts(s);
    puts(sen);
    return 0;
}