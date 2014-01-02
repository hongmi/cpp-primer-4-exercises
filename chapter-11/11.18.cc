istream_iterator<int> in_iter(cin), eof;
ostream_iterator<int> out_iter(fout);

while (in_iter != eof) {
  if (*in_iter % 2) {
    *out_iter++ = *in_iter;
    *out_iter++ = ' ' - 0;
  }
  else 
    {
      *out_iter++ = *in_iter;
      *out_iter++ = '\n' - 0;
    }
 }
