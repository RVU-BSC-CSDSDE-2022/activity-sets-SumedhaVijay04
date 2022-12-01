#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter the 3 numbers:");
  scanf("%d%d%d",&a,&b,&c);
  int res=max(a,b,c);
  printf("%d",res);
}
int max (int a,int b,int c)
{
  if(a>b)
  {
    printf("%d is the largest\n:",a);
  }
  else if(b>c)
  {
    printf("%d is the largest\n:",b);
    }
  else if(c>a)
  {
    printf("%d is the largest\n",c);
  }
  else
  {
    printf("all are equal");
  }
  return a,b,c;
  
}