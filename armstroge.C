#include<stdio.h>
int main()
{
int m,temp,b=0,z,a;
scanf("%d",&m);
temp=m;
while(m!=0)
{
a=m%10;
z=a*a*a;
b=b+z;
m=m/10;
}
if(b==temp)
{
printf("amstrong number");
}
else
{
printf("\n not an amstrong number");
}
}
