#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    scanf("%s",str);
    
    for(int i=0;i<strlen(str);i++)
    {
        if(isupper(str[i]))
        str[i]=tolower(str[i]);
        else
        str[i]=toupper(str[i]);
    }
    printf("%s",str);
}