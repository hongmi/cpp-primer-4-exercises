int main()
{
  while (it != files.end()) {
    ifstream input(it->c_str());
    while (!input)
      input.open((++it)->c_str());
    //if (!input){++it; continue;}
    while (input >> s)
      process(s);
    ++it;
  }
  return 0;
}
