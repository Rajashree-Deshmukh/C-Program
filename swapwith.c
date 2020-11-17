#include<stdio.h>
int main()
{
 int temp,a,b;
 printf("\n Enter value of a and b :");
 scanf("%d%d",&a,&b);
 printf("\n Before swapping %d%d  :",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("\n After swapping %d%d is \t :",a,b);
 return 0;
}
