#include <stdio.h>
#include <stdlib.h>

int main()
{
char s[100];
printf("enter your string ");
gets(s);
char x;
printf("enter any character to search ");
scanf("%c",&x);
for(int i=0;i<strlen(s);i++)
{
    if(s[i]==x)
    {
        printf("%c is found at index %d",x,i);
        break;
    }
}
    return 0;
}
