#include<stdio.h>
int input_arry_size(){
  int n;
  printf("enter array size:\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n]){
  int i;
  printf("enter the elements of the array:\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}
int sumofarray(int n,int a[n]){
  int i,sum=0;
  for(i=0;<n;i++){
    sum+=a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum){
  int i;
  printf("the sum of the array elements \n");
  for(i=0;<n-1;++){
  }
     printf("%d is %d \n", a[n-1],sum);
}
int main(){
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sumofarray(n,a);
  output(n,a,sum);
  return 0;
}
