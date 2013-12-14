void copy_array(int src, size_t len, int dest)
{
  for (size_t i = 0; i != len; ++i) {
    dest[i] = src[i];
  }
}

void assign_vector(const vector<int> &src, vector<int> &dest)
{
  dest.clear();
  for (vector<int>::const_iterator ci = src.begin();
       ci != src.end();
       ++ci) {
    dest.push_back(*ci);
  }
}
