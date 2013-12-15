void twiceOdd(vector<int> & v)
{
  vector<int>::iterator i = v.begin();
  while (i != v.end()) {
    if (*i % 2) {
      *i *= 2;
    }
    ++i;
  }
