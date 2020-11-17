#include<stdio.h>
int main()
{
  int base,exp,result=1;
  printf("Enter base num :");
  scanf("%d",&base);
  printf("Enter exponent :");
  scanf("%d",&exp);
  while(exp>0)
  {
    result*=base;
    --exp;
  }
 printf("Ans =%d",result);
return 0;
}

