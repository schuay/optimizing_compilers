int fac_rec(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fac_rec(n-1);
}

int main(void)
{
    int x;

    if (x == 3)
        x = fac_rec(x);
    else
        x = 6;

    return x;
}
