#include<stdio.h>
int main()
{
unsigned long int a=1;
int n = 0;
  while (a!=0)
  {
    a=a<<1;
    n=n+1;
  }
  printf("unsigned long int is sizeof%d\nbit",n);
  printf("The max is%lu\n",a-1);
  printf("The min is%lu",a);
  
  return 0;
}
