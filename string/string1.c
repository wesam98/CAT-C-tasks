#include <stdio.h>
#include <stdlib.h>

int main()
{ char string [100];
printf("enter your string ");
scanf("%s",&string );
for (int i=0;i<strlen(string);i++)
{
    string[i]-=32;
}
printf("%s",string);
    return 0;
}
