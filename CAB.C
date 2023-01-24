#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter a amount");
scanf("%d%d",&x,&y);
if(x<y)
printf("x cab is minimum charge");
else if(x>y)
printf("ycab is minimum charge");
else if(x=y)
printf("x cab and y xab are same") ;
else
printf("erroe");
getch();
}