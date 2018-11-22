int co_num(int x, int y)
{
    int r = 0;
    int tmp;
    if (x < y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }
    while (r != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    return y;
}