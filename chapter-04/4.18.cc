int main()
{
  const int array_size = 10;
  int arr[array_size] = {1,2,3};
  for (int *p = arr; p != arr + array_size; ++p) {
    *p = 0;
  }
  return 0;
}
