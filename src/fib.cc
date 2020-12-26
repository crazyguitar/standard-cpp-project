#include "fib/fib.h"

int fib(int n)
{
  return n <= 2 ? 1 : (fib(n-1) + fib(n-2));
}
