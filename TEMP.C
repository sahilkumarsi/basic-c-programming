#include<stdio.h>
#include<conio.h>
void main()
{
float c,fr;
clrscr();
printf("enter a temp");
scanf("%f",&c);
fr=(c*9/5)+32;
printf("%f\n",fr);
c=(fr-32)*5/9;
printf("%f",c) ;
getch();
}
