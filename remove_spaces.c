#include<stdio.h>
#include<string.h>
void main()
{
    char *a;
    puts("Enter string\n");
    fgets(a,20,stdin);
    for(int i=0;i<20;i++)
    {
        if(a[i]==' ')
        {
            memmove(a+i,a+i+1,strlen((a+i+1)+1));
        }
    }
    puts(a);
}
