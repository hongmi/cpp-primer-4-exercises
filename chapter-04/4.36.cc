int main()
{
  for (int *p = *ia; p != ia + 3 * 4; p+=4) {
    for (int *q = p, q != p + 4; ++q) {
      cout << *q << endl;
