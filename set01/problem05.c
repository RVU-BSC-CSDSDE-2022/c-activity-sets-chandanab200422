#include <stdio.h>

int main() {
   int a, b, c;
  printf("Enter the number a");
  printf("Enter the number b");
  printf("Entre the number c");

  if ( a > b && a > c )
      printf("%d is the largest.", a);
   else if ( b > a && b > c )
      printf("%d is the largest.", b);
   else if ( c > a && c > b )
      printf("%d is the largest.", c);
   else   
      printf("not equal");

   return 0;
}