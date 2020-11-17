#include<stdio.h>
int main()
{
  int n,rem,num,rev=0;
  printf("\n Enter an Integer :");
  scanf("\n %d",&n);
  num=n;
  while(n!=0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
  }
 if(num==rev)
 {
   printf("%d is palindrome number",num);
 }
 else
 {
   printf("%d is not palindrome number",num);
 }
return 0;
}
