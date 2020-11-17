#include<stdio.h>
int main()
{
 int a,b;
 printf("\n Enter value of a and b :");
 scanf("%d%d",&a,&b);
 printf("\n Before swapping %d%d  :",a,b);
 a=a-b;
 b=a+b;
 a=b-a;
 printf("\n After swapping %d%d \t :",a,b);
 return 0;
}
