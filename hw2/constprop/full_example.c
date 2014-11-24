int main()
{
  int x, y, z;

  x = 4;
  z = x + y;

  y = 7;
  z = (x - y) * x / y;

  while (x < 10) {
    z = z + 1;
  }

  if (x <= 10) {
    int x;
    x = z * 0;
  } else if (x == 11) {
    int y;
    y = x / 0;
  }

  {
    int a = 17UL;
  }

  return 0;
}
