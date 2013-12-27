void r(const string &filename, vector<string> &v)
{
  ifstream in(filename.c_str());
  if (!in)
    return;
  string word;
  while (in >> word)) {
    v.push_back(word);
  }
}
