#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string*> vsp;
  for (vector<string*>::iterator i = vsp.begin(); i != vsp.end(); ++i) {
    cout << **i << (*i)->size() << endl;
  }
  return 0;
}
