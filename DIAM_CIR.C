#include<stdio.h>
#include<conio.h>
void main()
{
float pi=3.14,dia,cir,area,rad;
clrscr();
printf("enter a radius");
scanf("%f",rad);
dia=2*rad;
printf("dimeter%f",dia);
scanf("%f",cir);
 cir=pi*2*rad;
 printf("\ncircumfrence=%f",cir);
 scanf("%f",area);
 area=pi*rad*rad;

printf("\narea=%f",area);
getch();
}

