int main()
{
  int i = 9;
  int j = 2;
  int *p = &i;
  p = &j;
  *p = 3;
  return j;
}
