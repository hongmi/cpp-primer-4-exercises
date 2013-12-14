void copy(const vector<int> & cvi, int arr[], size_t len)
{
  for (int * p = arr; p != arr + len; ++p) {
    *p = cvi[p - arr];
  }
}
  
