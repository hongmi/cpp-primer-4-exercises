
string last;
string current;
while (cin >> current) {
#ifndef NDEBUG
  cout << "input: " << current << endl;
  #endif
  if (!isupper(current[0]))
    continue;
  if (last == current) {
    cout << last << endl;
    break;
  }
  last = current;
 }

if (last.empty())
  cout << "no continue words." << endl;
