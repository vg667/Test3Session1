#include<stdio.h>
void input(int*num1, int*den1, int*num2, int*den2)
{
  printf("enter the first fraction (numerator,denominator)");
  scanf("%d%d",num1,den1);
  printf("enter the second fraction (numerator,denominator)");
  scanf("%d%d",num2,den2);
}
int lcm(int a,int b)
{
  int i,hcf,lcm;
  for(i=1;i<=a && i<=b;++i)
    {
      if(a%i==0 && b%i==0)
      {
        hcf=i;
      }
    }
  lcm=(a*b)/hcf;
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int m,a,b;
m = lcm(den1,den2);
a = m/den1;
b = m/den2;
num1 = a*num1;
den1 = a*den1;
num2 = b*num2;
den2 = b*den2;
*num3 = num1 + num2;
*den3 = (den1*den2)/m;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input (&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}