int main()
{
  int ia[] = {0, 1, 1, 2, 3, 5 ,8, 13, 21, 55, 89};
  vector<int> vi(ia, ia + sizeof(ia) / sizeof(int));
  list<int> li(ia, ia + sizeof(ia) / sizeof(int));

  vector<int>::iterator iv = vi.begin();
  while (iv != vi.end()) {
    if (*iv % 2)
      ++iv;
    else
      iv = vi.erase(*iv);
  }

  list<int>::iterator il = li.begin();
  while (il != li.end()) {
    if (*il % 2)
      il = li.erase(*il);
    else
      ++il;
  }
  return 0;
}

