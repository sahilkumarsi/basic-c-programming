#include<stdio.h>
#include<conio.h>
void main()
{
 float math,sci,sst,eng,hin,total,ave,per;
 clrscr();
 printf("enter five number");
 scanf("%f%f%f%f%f",&math,&sci,&sst,&eng,&hin);
 total=math+sci+sst+eng+hin;
 printf("%f",total);
 scanf("%f",&total);
 ave=total/5;
 printf("%f",ave);


 getch();


}


