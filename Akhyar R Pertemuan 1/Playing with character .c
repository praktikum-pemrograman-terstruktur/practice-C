#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch; char s[10]; char k [50];
    scanf ("%c", &ch);
    scanf ("%s\n", &s);
    scanf ("%[^\n]%c", &k);
    
    printf ("%c\n", ch);
    printf ("%s\n", s);
    printf ("%s", k);
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
