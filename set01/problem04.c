#include <stdio.h>
int sum(int *n1,int *n2);
int main()
{
  int x,y;
  
  printf("enter the two numbers:");
  scanf("%d%d",&x,&y);
  int add=sum(&x,&y);
  printf("%d",add);
  return 0;
    
}
int sum(int *n1,int *n2)
{
  int sum=*n1 + *n2;
  return sum;
}