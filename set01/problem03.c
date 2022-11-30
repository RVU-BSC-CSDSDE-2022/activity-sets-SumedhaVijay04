#include<stdio.h>
int main()
{
  int a,b,sum;
  printf("Enter 2 numbers:");
  scanf("%d%d",&a,&b);
  sum=add(a,b);
  printf("the sum of %d and %d is %d\n",a,b,sum);
  return 0;
}
int add(int a,int b)
{
  int sum=a+b;
  return sum;
  }