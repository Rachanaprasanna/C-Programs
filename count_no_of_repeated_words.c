#include<stdio.h>
#include<string.h>

void main()
{
    char str[100],other[10];
    puts("Enter a string");
    gets(str);
    char words[100][100];
    int i=0,j=0,k=0,count=0,max=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            words[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            words[k][j]=str[i];
            j++;
        }
    }
    words[k][j]='\0';


    for(i=0;i<=k;i++)
    {
        printf("%s ",words[i]);
    }
    j=1;
    for(i=0;i<k;i++)
    {
        for(int l=1;l<=k;l++)
        {
           	if (words[l][j] == '\0' || l == i)
			{
				continue;
			}
			if (strcmp (words[i], words[l]) == 1) {
				words[l][j] = '\0';
			}
        }
    }
    j=1;
    for(i=0;i<=k;i++)
    {
        if(words[i][j]!='\0')
        {
            count++;

        }
    }
    printf("\n  repeated = %d",count);
}
