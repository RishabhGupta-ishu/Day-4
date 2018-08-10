/* Deletion at beginning */
#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
clrscr();
int a[max],i,j;
printf("\n enter limit");
scanf("%d",&j);
if(j>=max)
{
printf("\n please enter only limited array");
exit(0);
}
printf("\n after deletion at beginning");
for(i=0;i<=j-2;i++)
{
a[i]=a[i+1];
printf("%d",a[i]);
}
j--;
getch();
}
