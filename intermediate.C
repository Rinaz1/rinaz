#include<stdio.h>
int main()
{
int a,temp,i,j,a[20];
printf("enter the array of numbers");
scanf("%d",&a);
printf("enter the numbers");
for(i=0;i<=a;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=a;i++)
{
for(j=i+1;j<=a;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
getch();
return 0;
}
i=1;
j=[i+1];
}
