#include<stdio.h>
#include<conio.h>
void main ()
{
int a,b,c,choose;
clrscr();
printf("enter a choice");
printf("\n 1 add\n 2sub");
printf("choose");
scanf("%d",&choose);

switch(choose)
{
	case 1:
	printf ("enter a two number");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);

		break;


 case 2:
 printf("enter a two number");
 scanf("%d%d",&a,&b);
 c=a-b;
 printf("%d",c);
 break;
 }
 getch();
 }
