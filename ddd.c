#include<stdio.h>
#include<conio.h>'
void main()
{
int a;
clrscr();
printf("\n Enter the year:");
scanf("%d",&a);
if((a%4==0 && a%100==0 && a%400==0)||(a%4==0 && a%400==0))
printf("\n leap year");
else
printf("\n Not a leap year");
getch();
}
