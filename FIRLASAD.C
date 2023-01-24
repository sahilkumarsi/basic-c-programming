 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int sum ,n ,fd,ld ;
 clrscr();
 printf("enter a number");
 scanf("%d",&n);
 ld=n%10;
 while (n>=10)
 {
 n=n/10;
  }
  fd=n;
  sum=ld+fd;
  printf("sum of fd &id=%d",sum);
  getch();

    }
