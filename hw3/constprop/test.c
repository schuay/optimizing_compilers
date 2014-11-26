int main()
{
  int a = 0, b, c, d, e;
  
  {
      int a = 42;
      b = a - (80 / 2 + 1);
  }

  a = b * b * a * b;

  /* Branch could be taken. */
  c = a * b;
  while (b < 42) {
      c = c + 1;
  }

  /* Branch is not taken. */
  while (b < 1) {
      a = 42;
  }

  /* No branch information. */
  if (c == 42) {
      c = 53;
  } else {
      c = 31;
  }

  /* If branch is taken. */
  if (b <= 1) {
      c = (a / b) * a + 2 * b;
  } else {
      c = 42;
  }

  /* Short-circuiting AND. */
  if ((b * 0) && c && d) {
      d = 42;
  } else {
      d = b * b + c;
  }

  /* Short-circuiting OR. */
  if (a || d) {
      e = 4;
  } else {
      e = 42;
  }

  /* Constants should be: a, b, c, d, e = 0, 1, 2, 3, 4. */

  return a;
}
