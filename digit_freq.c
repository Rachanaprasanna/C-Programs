#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[10]={0};
    char str[100];
    fgets( str, 100, stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            arr[(int)(str[i]-48)]++;
        }
    }

    for(int i=0;arr[i]<10;i++)
        printf("%d ",arr[i]);

    return 0;
}

