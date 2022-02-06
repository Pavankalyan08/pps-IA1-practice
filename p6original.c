#include<stdio.h>
#include<string.h>
void input_two_string(char *a,char *b)
{
  printf("enter two strings\n");
  scanf("%s",a);
  scanf("%s",b);
}
int str_cmp(char *a,char *b)
{
  int i,n;
  for(int i=0;(a[i]==b[i] && a[i]!='\0');i++)
  n= a[i]-b[i];
  return n;
}
void output(char *a,char *b,int result)
{
  if(result>0)
  {
    printf("%s is greater than %s\n",a,b);
  }
  else if(result<0)
  {
    printf("%s is greater than %s\n",b,a);
  }
  else
  {
    printf("%s is equal to %s\n",a,b);
  }
}
int main()
{
  int n;
  char a[200],b[200];
  input_two_string(a,b);
  n=strcmp(a,b);
  output(a,b,n);
  return 0;
}