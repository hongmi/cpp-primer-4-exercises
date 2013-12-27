vector<int>::iterator find(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
  vector<int>::iterator i = beg;
  while (i != end) {
    if (*i == val)
      return i;
    ++i;
  }
  return end;
}
