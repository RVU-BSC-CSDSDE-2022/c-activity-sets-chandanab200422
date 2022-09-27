#include <stdio.h>

int main(void){
  int a,b,sum;
  printf("enter the first numbre\n");
  scanf("%d",&a);
  printf("enter the seconf number\n");
  scarf("%d",&b);
  sum = sum_func(a,b);
  printf("%d",sum);
  return 0;
  }

int sum_func(int a,int b);
{
  int sum = a+b;
  return sum;
}