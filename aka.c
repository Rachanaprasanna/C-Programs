#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
  int ch=97;
    int i,j,k,m;
  system("cls");
    for(i=1;i<=26;i++)
    {
        for(j=26;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%c",ch++);
            ch--;
        for(m=1;m<i;m++)
            printf("%c",--ch);
        printf("\n");
        ch=97;

    }
    getch();
return 0;

}
