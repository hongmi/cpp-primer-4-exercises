int main()
{
  string s1, s2;
  bool bquit = false;
  do {
    cin >> s1 >> s2;
    if (s1 < s2)
      cout << s1 << " less than " << s2 << endl;
    else
      cout << s2 << " less than " << s1 << endl;
    cout << " continue? [y/n]";
    char c;
    cin >> c;
    bquit = c != 'y';     
  } while (!bquit);
  return 0;
}
