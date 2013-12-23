bool prefixVector(const vector<int> &v1, const vector<int> &v2)
{
  for (vector<int>::iterator i1 = v1.begin(), i2 = v2.begin();
       i1 != v1.end() && i2 != v2.end();
       ++i1, ++i2) {
    if (*i1 != *i2)
      return false;
  }
  return true;
}
    
