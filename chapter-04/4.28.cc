int main()
{
  vector<int> vi;
  int temp;
  while (cin >> temp) {
    vi.push_back(temp);
  }

  int *pa = new int[vi.size()]();
  for (int *p = pa; p != pa + vi.size(); ++p) {
    *p = vi[p - pa];
  }
  return 0;
}
