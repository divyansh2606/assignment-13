#include<stdio.h>
sum(int n)
{
   if(n>0)
   {
return n%10+sum(n/10);

   }

}
int main()
{
printf("%d",sum(25));
return 0;

}