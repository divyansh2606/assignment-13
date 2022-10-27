#include<stdio.h>
int main()
{  int k;
    k=sumofn(10);
printf("%d",k);
return 0;
}
int sumofn(int n)
{

  if(n>0)
  {

   return n+sumofn(n-1);

  }
  }
