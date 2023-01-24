#include<stdio.h>
#include<conio.h>
void main()
{
float dist,t,speed;
clrscr();
printf("enter a dist and time :- ") ;
scanf("%f%f",&dist,&t);
speed=dist/t;
printf("speed%f",speed);
getch();
}