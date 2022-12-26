#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char str[100]="hi hello hi", word[100], twoD[10][30];
	int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, l = 0;

	//printf ("Enter the string\n");
	//gets (str);

	// let us convert the string into 2D array
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			twoD[k][j] = '\0';
			k ++;
			j = 0;
		}
		else
		{
			twoD[k][j] = str[i];
			j ++;
		}
	}

	twoD[k][j] = '\0';

	for(i=0;i<k+1;i++)
    {
        printf("%s",twoD[i]);
    }
}
