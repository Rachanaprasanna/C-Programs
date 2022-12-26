#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    char sub[10][10];
    int i=0,j=0,k=0;
    puts("Enter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
       if (str[i] == ' ')
		{
			sub[k][j] = '\0';
			k++;
			j = 0;
		}
		else
		{
			sub[k][j] = str[i];
			j++;
		}
    }
    sub[k][j] = '\0';
    j = 0;
	for (i = 0; i < k; i++)
	{
		for (int l = 1; l <=k ; l++)
		{
			if (sub[l][j] == '\0'|| l == i)
			{
				continue;
			}

			if (strcmp (sub[i], sub[l]) == 0) {
				sub[l][j] = '\0';
			}
		}
	}

for(i=0;i<=k;i++)
{
        printf("%s ",sub[i]);
}



}
