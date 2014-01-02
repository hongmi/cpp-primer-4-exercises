ostream_iterator<string> out_iter(cout, "\n");

istream_iterator<string> in_iter(fin), eof;

while (in_iter != eof) {
  *out_iter++ = *in_iter++;
 }
