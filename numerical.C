#include <stdio.h>
int main()
{ int i,j, m;
printf("Enter two positive integers: ");
scanf("%d %d", &i, &j);
minMultiple = (i>j) ? i : j;
while(1)
 {
if( m%i==0 && m%j==0 )
  {
 printf("The LCM of %d and %d is %d.", i, j,m);
  }
  ++m;
  }
 return 0;
}
