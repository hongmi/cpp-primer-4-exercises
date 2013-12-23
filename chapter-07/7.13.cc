int arr[10] = {0,1};

int sum(int a[], size_t n)
{
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += a[i];
  }
  return sum;
}

int sum2(const int *begin, const int *end)
{
  int sum = 0;
  for (const int *i = begin; i != end; ++i) {
    sum += *i;
  }
  return sum;
}

int sum3(int (&a)[10])
{
  int sum = 0;
  for (int i = 0; i < 10; ++i) {
    sum += a[i];
  }
  return sum;
}


