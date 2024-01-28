#include <stdio.h>
#include <stdlib.h>

int main()
{char s[100];
printf("enter your string ");
scanf("%s",&s);
for(int i=0;i<strlen(s);i++)
{

printf("%c",s[strlen(s)-i-1]);
}

    return 0;
}
