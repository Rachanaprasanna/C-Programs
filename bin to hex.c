#include<stdio.h>
#include<math.h>
void main()
{
    int n,hex,k=0;
    printf("Enter number of bits\n");
    scanf("%d",&n);
    int m = (n/(4+1));
    int sum[m];
    char bin[n+m];
    char temp;
    printf("Enter binary value with space after 4 digits\n");
    scanf("%c",&temp);//To clear the buffer As we enter an integer value and hit enter to read next value,
    scanf("%[^\n]",bin);//compiler stores either enter or null into the string's first character and string input terminates.
    for(int i=0;i<n;i++)
    {
        j=0;
        if(bin[i]==1)
        {
            sum[k]=
        }
    }


}
