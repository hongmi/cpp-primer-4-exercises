bool eq(int s, size_t slen, int d, size_t dlen)
{
  if (slen != dlen)
    return false;
  for (size_t i = 0; i != slen; ++i) {
    if (s[i] != d[i]) {
      return false;
    }
  }
  return true;
}
bool eq(const vector<int> &v1, const vector<int> &v2)
{
  if (v1.size() != v2.size())
    return false;
  for (vector<int>::iterator i1 = v1.begin(), i2 = v2.begin();
       i1 != v1.end(); ++i1, ++i2) {
    if (*i1 != *v2)
      return false;
  }
  return true;
}
