#include<stdio.>
int main()
{
int a,b,c,d,e,f;
printf("enter the three digit value ");
scanf("%d",a);
b=a%100;
c=a/100;
d=c%10;
e=c/10;
f=((e*100)+(d*10)+b);
if(a==f)
printf("this is palindrome");
else
printf("this is  not palindrome");
}
