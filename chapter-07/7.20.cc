int factorial(int n, int v)
{
  if (n > 1) {
    return factorial(n - 1, v * (v - 1));
  }
  return 1;
}
