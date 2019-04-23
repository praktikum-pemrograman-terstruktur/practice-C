#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,x;
    scanf("%d\n%d", &a, &b);
    char *strings[] = {"one","two","three","four","five","six","seven","eight","nine"};
    for (x=a;x<=b;x++)
    {
        if (x>=1 && x<=9)
        {
            printf ("%s\n",strings[x-1]);
        }
        else if (x%2==0)
        {
            printf ("even\n");
        }
        else
        {
            printf ("odd\n");
        }
        
    }
  	// Complete the code.

    return 0;
}

