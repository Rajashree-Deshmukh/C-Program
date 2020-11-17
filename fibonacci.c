#include<stdio.h>
int main()
{
  int i,n,f1=0,f2=1,temp;
  printf("Enter the number of terms in series :");
  scanf("%d",&n);
  printf("Fibonacci Series is :");
  for(i=1;i<=n;i++)
  {
    printf("%d \n",f1);
    temp=f1+f2;
    f1=f2;
    f2=temp;
  }
 return 0;
}

