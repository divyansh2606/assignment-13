#include<stdio.h>
sum(int n)
{
   if(n>0)
   {
return n*2-1+sum(n-1);

   }

}
int main()
{
printf("%d",sum(10));
return 0;

}