int abs(int i)
{
  if (i < 0)
    return 0 - i;
  return i;
}

unsigned abs0(int i)
{
  if (i < 0) {
    return ~i + 1;
  }
  return i;    
}

int main()
{
  return abs0(-2);
}
