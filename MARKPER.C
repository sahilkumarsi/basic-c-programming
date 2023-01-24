#include<stdio.h>
#include<conio.h>
void main()
{
float phy,che,bio,math,comp,total,percent;
clrscr();
printf("enter a marks=");
scanf("%f%f%f%f%f",&phy,&che,&bio,&math,&comp);
total=phy+che+bio+math+comp;
printf("total %f",total);
percent=total/5;
printf("percent %f",percent);
if(percent>=95)
printf("grade A\n");
else if(percent>=80)
printf("grade B\n");
else if (percent>=70)
printf("grade C\n");
else if (percent>=60)
printf("grade D\n");
else if(percent>=50)
printf("gread E\n");
else if (percent>=40)
printf("gread F\n");









getch();
}
