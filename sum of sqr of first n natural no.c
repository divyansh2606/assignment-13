#include<stdio.h>
sum(int n)
{
   if(n>0)
   {
return n*n+sum(n-1);

   }

}
int main()
{
printf("%d",sum(3));
return 0;

}