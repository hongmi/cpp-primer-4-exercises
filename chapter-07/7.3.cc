int f(int base, int exponent)
{
  if (base == 0)
    return 0;

  if (base == 1)
    return 1;

  
  int r = 1;
  for (int i = exponent; i > 0; --i) {
    r *= base;
  }
  return r;
}
