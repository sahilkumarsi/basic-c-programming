
//chak the small and capital or special char
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a character");
scanf("ch %c",&ch);

if(ch=='A'|| ch=='B'||ch=='C'||ch=='D')
printf("characteris capital");
else if  (ch=='a'||ch=='b'||ch=='c'||ch=='d')
printf("character is small");
else
    printf("special character") ;
getch();
}