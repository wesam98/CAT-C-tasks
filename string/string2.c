#include <stdio.h>
#include <stdlib.h>

int main()
{ int digits=0,alpha=0,special=0;
   char string [100];
   printf("enter your string ");
   scanf("%s",&string);
   for(int i=0;i<strlen(string);i++)
   {
     if(string[i]>='0' && string[i]<='9')
        digits+=1;
   else if(string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z')
    alpha+=1;
    else
    special+=1;

    }
   printf("total number of alphabets is:%d , digits is:%d , special characters is: %d ",alpha,digits,special);
    return 0;
}
