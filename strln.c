#include <stdio.h>
#include<string.h>
int main(void)
{
int slen;
char str[5];
printf("Enter string: %s\n", str);
scanf("%s",&str);
slen=strlen(str);
scanf("%d",&slen);
printf("The length of string is:%d\n", slen);
}
