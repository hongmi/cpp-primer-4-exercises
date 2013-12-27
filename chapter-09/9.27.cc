void delete(list<string> &lst, string val)
{
  list<string>::iterator i = lst.begin();
  while (i != lst.end()) {
    if (*i == val) {
      lst.erase(i);
      break;
    }
    ++i;
  }
}
