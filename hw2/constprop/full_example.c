int main()
{
  int x, y, z;

  x = 4;
  z = x + y;

  y = 7;
  z = x + y;

  while (x < 10) {
    z = z + 1;
  }

  return 0;
}
