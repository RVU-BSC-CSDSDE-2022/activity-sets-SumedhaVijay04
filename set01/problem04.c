#include<stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum)
}
int input()
{
  int n;
  printf("Enter the value:");
  scanf("%d",&n);
  return n;
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void ouput(int a,int b,int sum)
{
  printf("The sum of %d and %d is %d\n",a,b,sum);
  return 0;
}