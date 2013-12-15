#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
  cout << "char: " << sizeof (char) << endl;
  cout << "bool: " << sizeof (bool) << endl;
  cout << "short: " << sizeof (short) << endl;
  cout << "int: " << sizeof (int) << endl;
  cout << "long: " << sizeof (long) << endl;
  cout << "float: " << sizeof (float) << endl;
  cout << "double: " << sizeof (double) << endl;
  cout << "long double: " << sizeof (long double) << endl;
  int arr[100];
  cout << "arr[100]: " << sizeof(arr) << endl;
  return 0;
}
