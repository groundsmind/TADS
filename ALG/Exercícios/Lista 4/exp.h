float pow(int base, int exp)
{
    if (exp == 0)
    {
        return 1.0;
    }
    else if (exp % 2)
    {
        return base * pow(base, exp-1);
    }
    else
    {
        int temp = pow(base, exp/2);
        return temp*temp;
    }
}