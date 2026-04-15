unsigned long long fac(int x)
{
    unsigned long long result = 1;
    if (x==0)
    {
        return 1;
    }
    for (int i = 1; i <= x; i++)
    {
        result*=i;
    }
    return result;
}