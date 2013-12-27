bool find(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
  vector<int>::iterator i = beg;
  while (i != end) {
    if (*i == val)
      return true;
    ++i;
  }
  return false;
}
