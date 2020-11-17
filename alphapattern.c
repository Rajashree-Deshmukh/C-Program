#include<stdio.h>
int main()
{
 int i,j,row=4,col=3;
 for(i=1;i<=row;++i)
 {
   for(j=1;j<=col;++j)
    {
      printf("%c%c",'A'-1+i,'a'-1+i);
    }
   printf("\n");
 }
return 0;
}


