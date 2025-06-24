template <typename T>
T linearGCD(T a, T b)
{
    T ans = 0;
    for (T i = 1; i <= min(a, b); ++i)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            ans = i;
        }
    }
    return ans;
}

template <typename E>
E euclideanGCD(E a, E b)
{
    if (b == 0)
        return a;
    return euclideanGCD(b, a % b);
}