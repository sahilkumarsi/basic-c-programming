#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,d;
clrscr();
printf("enter run:\n");
scanf("%d",&x);
printf("enter run 2:\n");
scanf("%d",&y);
printf("enter the value of d");
scanf("%d",&d);
  {
   if(x-y<d)
printf("chef intrest game");
else if(x-y>d)
printf("chef dont intrest game");
else
printf("invalid output");}
getch();
}