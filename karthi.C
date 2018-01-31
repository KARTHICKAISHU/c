#include<stdio.h>
#include<conio.h>
int main()
{
int a;
scnaf("%d",&a);
if(a>=0)
{
printf("POSITIVE");
}
else
{
printf("ZERO");
}
else
{
printf("NEGATIVE");
}
getch();
return 0;
}
