void rd(string file, vector<string> &v)
{
  ifstream in(file.c_str());

  if (!in)
    return;
  string line;
  while (getline(in, line)) {
    istringstream is(line);
    string word;
    while (is >> word)
      v.push_back(word);
  }
  return;
}
