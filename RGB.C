
#include<stdio.h>
#include<conio.h>
void main()
{
char m,f,c,r,b,g;
clrscr();
printf("enter a eye color");
scanf("%c%c",&m,&f);
if(m==r&&f=='r')
printf("%c",r);
else if (m=='b'&&f=='b')
printf("%c",b);
else if(m=='g'&&f=='g')
printf("%c",g);

else if(m=='r'&&f=='b')
printf("%c",r);
else if(m=='b'&&f=='r')
printf("%c",r);
else if(
m=='g'&&f=='b')
printf("%c",b);

else if(m=='b'&&f=='g')
printf("%c",b);
else if(m=='g'&&f=='r')
printf("%c",r);
else
printf("%c",r);

getch();
}
