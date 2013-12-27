void split(const list<int> &li, deque<int> &deven, deque<int> &dodd)
{
  list<int>::const_iterator i = li.begin();
  while (i != li.end()) {
    if (*i % 2)
      dodd.push_back(*i);
    else
      deven.push_back(*i);
    ++i;
  }
}
