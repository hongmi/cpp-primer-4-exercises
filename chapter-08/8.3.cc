istream & r(istream &in)
{
  string s;
  while (in >> s, !s.eof()) {
    cout << s;
  }
  in.clear();
  return in;
}
