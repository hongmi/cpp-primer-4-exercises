#include <cstring>

int main()
{
  const char *s = "as sa dsa ";
  char s2[] = "sdadsad sd sa das";
  char *pnew = new char[strlen(s) + strlen(s2) + 1];
  strcpy(pnew, s);
  
  strcat (pnew, s2);
  
  return 0;
}
