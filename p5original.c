#include <stdio.h>

int input()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d", &n);
  return n;
}

int gcd(int a, int b)
{
  int x;
  return x;
}

void output(int a, int b, int hcf)
{
  printf("The hcf of %d and %d is %d", a, b, hcf);
}

int main()
{
  int a = input();
  int b = input();
  int hcf = gcd(a, b);
  output(a, b, hcf);
  return 0;
}