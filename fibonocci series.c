#include<stdio.h>
int fib(int n)
{
   if(n==0||n==1)
        return n;
   return fib(n-1)+fib(n-2);
}
int main()
{
    int i;
    for(i=0;i<5;i++)
        printf(" %d ",fib(i));
    return 0;
}
