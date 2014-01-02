vector<int>::iterator i = vi.end();

--i;
while (i != vi.begin()) {
  cout << *i << endl;
  --i;
 }
//output begin
cout << *i << endl;
