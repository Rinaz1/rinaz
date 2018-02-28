#include <stdio.h>
#include<string.h>
int main(void)
{
char a[50];
int i,n=0,m;
clrscr();
scanf("%s",a);
m=strlen(a);
for(i=0;i<m;i++)
{
if(a[i]!='m')
n++;	
}
printf("%d",n);
getch ();
return 0;
}
