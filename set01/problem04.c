#include <stdio.h>
void change(int *x, int *y);

int main(void){
  int x,y;
  x=8,x=7;
  change(&x,&y);
  printf("x is %d y is %d",x,y);
  return 0;
}
void change(int *x, int*y, int *sum)
{
  *x=5
  *y=9
}    