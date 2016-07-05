#include<stdio.h>
void main()
{
int a=1,b=0,c,n,d;
scanf("%d",&n);
while(a!=n)
{
if(a==2)
b++;
else
{
d=n%10;
c=n/10;
if(d==2)
b++;
if(c==2)
b++;
}
a++;
}
printf("%d",c);
getch();
}

