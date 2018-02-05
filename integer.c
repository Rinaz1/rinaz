#include<stdio.h>
int main()
{
int n,k,i,arr[50],s=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<k;i++)
{
s=s+arr[i];
}
printf("%d",s);
return 0;
}
