#include <stack>
#include <deque>

using namespace std;

int main()
{
  deque<string> deq;
  stack<string> stk(deq);

  string s;
  while (cin >> s) {
    stk.push(s);
  }
  return 0;
}
