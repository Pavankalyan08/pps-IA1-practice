#include<stdio.h>
#include<math.h>
float input()
{
  float x;
  printf("enter the number\n");
  scanf("%f",&x);
  return x;
}
float my_sqrt(float x)
{
  float xn=x/2;
  float xnext;
  xnext=0.5*(xn+(x/xn));
  while(fabs(xn-xnext)>0.000001)
  {
    xn=xnext;
   xnext=0.5*(xn+(x/xn));
  }
  return xnext;
}
void output(float x,float result)
{
  printf("square root of %F if %f\n",x,result);
}
int main()
{
  float a,result;
  a=input();
  result=my_sqrt(a);
  output(a,result);
  return 0;
}