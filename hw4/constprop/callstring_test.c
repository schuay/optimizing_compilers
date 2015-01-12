int f(int a) {
    return a * 2;
}

int g(int a) {
    if (a < 50) {
        return f(a);
    } else {
        return a + 1;
    }
}

int h(int a) {
    return a / 2;
}

int main(void)
{
    int x, y, z;

    x = h(100);
    y = g(3);
    z = g(100);

    /* callstringlength:
     * 0: Only the value of x can be determined at this point.
     * 1: Only the values of x and y can be determined at this point.
     * 2: The values of x, y and z can be determined at this point.
     */

    return x + y + z;
}
