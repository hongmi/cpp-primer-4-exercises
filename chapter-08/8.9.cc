void r(const string &filename, vector<string> &v)
{
  ifstream in(filename.c_str());
  if (!in)
    return;
  string line;
  while (getline(in, line)) {
    v.push_back(line);
  }
}
