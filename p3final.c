#include<stdio.h>
int input()
{
  int a;
  printf("enter the valu of n\n");
  scanf("%d",&a);
  return a;
}
int sum(int n)
{
  int sum=0;
  do
    {
      sum=sum+n;
      n=n-1;
    }while(n>0);
    return sum;
}
void output(int n,int sum)
{
  printf("the sum of %d number is %d",n,sum);
}
int main()
{
  int x,y;
  x=input();
  y=sum(x);
  output(x,y);
  return 0;
}
