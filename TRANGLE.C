#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3;
clrscr();
printf("enter a three number");
scanf("%d%d%d",&s1,&s2,&s3);
if(s1==s2&&s2==s3&&s3==s1)
printf("equilaterel trangle");
else if(s1==s2||s2==s3||s3==s1)
printf("isoceles trangle");
else
printf("scalerle");
getch();
}