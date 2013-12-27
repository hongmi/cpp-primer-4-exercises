#include <deque>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

string eval(const string &s)
{
  //todo: eval a expr do not contains parenthes
  //surppos there is only + and - operations
}

void output(stack<char> &s)
{
  //todo: reverse output s
}
int main()
{

  deque<char> dc;
  stack<char> s(dc);
  
  string expr;
  cin >> expr;

  string::iterator i = expr.begin();
  while (i != expr.end()) {
    if (*i == ')') {
      string e;
      char c;
      while ((c = s.pop()) != '(') {
	e.insert(0, 1, c);
      }
      string v = eval(e);
      string::iterator iv = v.begin();
      while (iv != v.end())
	s.push(*iv);
    } else {
      s.push(*i);
      ++i;
    }
  }
  
  output(s);
  return 0;
}
