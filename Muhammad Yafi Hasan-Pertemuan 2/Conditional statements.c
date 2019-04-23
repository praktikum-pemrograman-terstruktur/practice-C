#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    char *strings[] = {"one","two","three","four","five","six","seven","eight","nine"};
    int x;
    scanf ("%d", &x);
    if (x >= 1 && x <= 9)
        printf("%s\n",strings[x-1]);
    else
        printf("Greater than 9\n");

    // Write Your Code Here

    return 0;
}