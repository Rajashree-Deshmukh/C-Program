#include<stdio.h>
int main()
{
  int n,cnt=0;
  printf("\n Enter integer :");
  scanf("%d",&n);
  while(n!=0)
  {
    n/=10;
    cnt++;
  }
  printf("Number of digits :%d",cnt);
return 0;
}
