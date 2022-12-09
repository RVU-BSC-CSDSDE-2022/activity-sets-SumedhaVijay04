#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
  char string1[20], string2[21];
  int result=0;
  input_two_strings(string1,string2);
  result=stringcompare(string1,string2);
  output(string1,string2,result);
  }
void input_two_strings(char *string1, char *string2)
{
  printf("enter the first string:");
  scanf("%s",string1);
  printf("enter the second string:");
  scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
  int result=0,i=0,flag=0;
  for(int i=0 ;string1[i]!='\0'&& string2[i]!='\0' ;i++)
    {
    if(string1!=string2)
    {
      flag=1;
      break;
    }
    }
  if(flag==0)
  {
    if(string1[i]!='\0'&& string2[i]!='\0')
      return 0;
    if(string1[i]!='\0')
      return 1;
    if(string2[i]!='\0')
      return 2;
  }
  if(flag==1)
  {
    if(string1>string2)
    return 1;
    else 
      return 2;
  }
}
void output(char *string1, char *string2, int result)
{
  
  if (result==0)
    printf("all are equal");
  if (result==1)
    printf("%s is greater than %s",string1,string2);
  if (result==2)
    printf("%s is greater than %s",string2,string1);
}