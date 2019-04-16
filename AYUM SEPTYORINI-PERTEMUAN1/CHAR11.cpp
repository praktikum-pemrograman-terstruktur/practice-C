#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch; 
    char s[60];
    char sen[260];

    scanf("%c\n", &ch);
    scanf("%s\n", s);
    scanf("%259[^\n]%*c", sen);

    printf("%c\n",ch);
    printf("%s \n",s);
    printf("%s \n",sen);
 
    return 0;
}

