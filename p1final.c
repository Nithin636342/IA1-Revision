#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter to number\n");
  scanf("%d%d",a,b);
}    
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("sum of %d is %d and %d",a,b,sum);
}
void main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
}

