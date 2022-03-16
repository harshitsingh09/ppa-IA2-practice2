#include <stdio.h>

int input_array_size()
{
  int n;
  printf("Enter the number of values you will enter:\n");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  for(int i=0; i<n; i++)
    {
      printf("Enter a value:\n");
      scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
  int s=0;
  for(int i=0; n>i; i++)
    {
      s = s + a[i];
    }
  return s;
}

void out_put(int sum)
{
  printf("Sum of all values is equal to %d", sum);
}

int main()
{
  int n, a[100];
  n = input_array_size();
  input_array(n, a);
  int sum = sum_composite_numbers(n, a);
  out_put(sum);
  return 0;
}