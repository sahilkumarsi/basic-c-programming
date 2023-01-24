//chak the small and capital or special char
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a character");
scanf("%c",&ch);

if(ch>=60&&ch<90)
printf("characteris capital");
else if  (ch>=97&&ch<123)
printf("character is small");
else
    printf("special character") ;
getch();
}