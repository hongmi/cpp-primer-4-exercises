int main()
{
  string s;
  cin >> s;
  char buf[1024] = {0};
  char *p = buf;
  char c;
  whilc (cin >> c) {
    *p++ = c;
  }
  return 0;
}
