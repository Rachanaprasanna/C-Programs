#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char str[10];
    char sen[20];
    scanf("%c\n",&ch);
    fgets(str,10,stdin);
    fgets(sen,20,stdin);

    putchar(ch);
    printf("\n");
    printf("%s",str);
    puts(sen);
    return 0;
}
