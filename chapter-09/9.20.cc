bool equal_vi_li(const vector<int> &vi, const list<int> &li)
{
  list<int> litemp(li.begin(), li.end());
  return litemp == vi;
}
