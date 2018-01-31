#include<stdio.h>
#include<conio.h>
void main ()
{
char a;
int b,c;
scanf("%c",&a);
b=(a=='a'||a==='e'||a=='i'||a=='o'||a=='u');
c=(a=='A'||a=='E'||a=='I'||a=='O'||a=='u');
if(b||c)
{
printf("VOWEL");
}
else
{
printf("CONSONANT");
}
getch();
return 0;
}
