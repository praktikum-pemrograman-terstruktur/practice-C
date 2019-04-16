#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100]; /*sigunakan array karakter untuk memasukan charakter yang ingin ditampilkan*/
    scanf("%[^\n]%c", &s); /*(%c) digunakan untuk menampilkan karakter*/
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf ("Hello, World!\n"); /*(\n) digunakan untuk membuat new line*/
    printf ("%s", s);
    return 0;
}