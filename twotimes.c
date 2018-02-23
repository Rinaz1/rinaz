#include <stdio.h>
#include<conio.h>
int main() {
	int a,b,c,d,m1,m2,tmin1,tmin2,sub,result,result1;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	m1=a*60;
	m2=c*60;
	tmin1=m+b;
	tmin2=+d;
	sub=tmin1-tmin2;
	result=sub/60;
	printf("%d\t",result);
	result1=sub%60;
	if(result1==0)
	{
	printf("0");
	}
	else
	printf("%d",result1);
  getch();
	return 0;	
	}
