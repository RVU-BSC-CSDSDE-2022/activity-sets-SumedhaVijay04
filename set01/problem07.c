#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
  int n;
  n=input_n();
  int sum;
  sum=sum_n_nos(n);
  output(n,sum);
}
int input_n()
{
  int n;
  printf("Enter the numbers:\n");
  scanf("%d",&n);
  return n;
  }
  int sum_n_nos(int n)
  {
    int sum;
    for(int i=1;i<=n;i++){
      sum+=i;
    }
    return sum;
  }
  void output(int n,int sum)
{
  printf("The sum of %d natural numbers is %d",n,sum);
  return 0;
}