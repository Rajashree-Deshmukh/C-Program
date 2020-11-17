#include<stdio.h>
int add(int a,int b);
int main()
{
 int a=6,b=5,c;
 c=add(a,b);
 printf("\n Addition is %d",c);
 return 0;
}
int add(int x,int y)
{
  int z;
  z=x+y;
  return z;
}
