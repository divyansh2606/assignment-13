#include<stdio.h>
sum(int n)
{
   if(n==0)
   return 1;
   
return n*sum(n-1);


}
int main()
{
printf("%d",sum(5));
return 0;

}