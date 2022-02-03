#include<stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int sum(int n)
{
  int sum=0;
  for (int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
  int i;
  for(int i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d\n",n,sum);
}
int main()
{
  int n1,sum0;
  n1=input();
  sum0=sum(n1);
  output(n1,sum0);
}