#include<conio.h>
#include<windows.h>
#include<stdio.h>

void ResetConsoleColour()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
}

void main()
{
    int n=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED); //red
        printf("    ");
        ResetConsoleColour();
        printf(" ");          //previous color and gap

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN); //green
        printf("    ");
        ResetConsoleColour();
        printf(" ");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_BLUE|BACKGROUND_INTENSITY); //white
        printf("    \n\n");
    }
     ResetConsoleColour();
    getch();
}
