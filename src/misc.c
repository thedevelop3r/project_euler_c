#include <stdio.h>
#include <math.h>
#include "euler_math.c"

double function(double n)
{
  return n * n - 2;
}

double derivative(double n)
{
  return 2 * n;
}

int main()
{
  double n = 3;
  for(int i = 0; i < 5; i++)
  {
    n = approx_zero(function, derivative, n); 
    printf("%lf\n", n);
  }
  print_array(prime_factorization(51));
}
