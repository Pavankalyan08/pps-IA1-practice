#include<stdio.h>
int input()
{
  int a;
  printf("enter three numbers\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int g;
  if(a>b && a>c)
  {
    g=a;
  }
  else if(b>c)
  {
    g=b;
  }
  else
  {
    g=c;
  }
  return g;
}
void output(int a,int b,int c,int largest)
{
  printf("the largets number among them is %d\n",largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest= cmp(a,b,c);
  output(a,b,c,largest);
  return largest;
}