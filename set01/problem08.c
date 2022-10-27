#include <stdio.h>
 
int main()
{
  int n, sum = 0, n, value;
 
  printf("How many numbers you want to add?\n");
  scanf("%d", &i);
 
  printf("Enter %d integers\n", i);
 
  for (n = 1; n <= i; n++)
  {
    scanf("%d", &value);
    sum = sum + value;
  }
 
  printf("Sum of the integers = %d\n", sum);
 
  return 0;
}