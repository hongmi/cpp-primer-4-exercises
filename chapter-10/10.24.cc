void replexual(ifstream &exception_file)
{
  set<string> excluded;
  string rw;
  while (exception_file >> rw)
    excluded.insert(rw);

  string word;
  while (cin >> word) {
    if (! excluded.count(word)) {
      word = word.substr(0, word.size() - 1);
    }
    cout << word << endl;
  }

  return 0;
}
