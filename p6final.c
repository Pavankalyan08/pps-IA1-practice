#include<stdio.h>
#include<string.h>
void input_two_string(char *a,char *b)
{
  printf("enter the two strings\n");
  scanf("%s",a);
  scanf("%s",b);
}
int str_cmp(char *a,char *b)
{
  int n;
  for(int i=0;(a[i]==b[i] && a[i]);i++)
  n=a[i]-b[i];
  return n;
}
void output(char *a,char *b,int result )
{
  if(result>0)
  {
    printf("%s is greater then %s",a,b);
  }
  else if(result<0)
  {
    printf("%s is greater then %s",b,a);
  }
  else
  {
    printf("%s is equal to %s",a,b);
  }
}
int main()
{
  int n;
  char a[200],b[200];
  input_two_string(a,b);
  n=str_cmp(a,b);
  output(a,b,n);
  return 0;
}