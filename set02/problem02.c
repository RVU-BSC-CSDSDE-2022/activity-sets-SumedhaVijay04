#include<stdio.h>
int main()
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int input_side();
{
  int a,b,c;
  printf("Enter the values for 3sides:");
  scanf("%d%d%d",&a,&b,&c);
}
  int chech_scalene(int a,int b,int c);
{
  int isscalene=0,result=0;
  if(a!=b && b!=c && c!=a)
  {
    return 0;
    break;
  }
  if(a==b && b!=c && c==a)
  {
    return 1;
  }
  else if (a==b && b==c && c==a)
  {
    return 2;
  }
}
  