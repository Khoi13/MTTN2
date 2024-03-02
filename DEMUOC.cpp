#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// vector<long long> isPrime(1e6, 0);

// void sieve()
// {
//     isPrime[1] = true;
//     for (int i = 2; i < 1e6; i++)
//     {
//         if (!isPrime[i])
//         {
//             for (int j = i * 2; j < 1e6; j += i)
//             {
//                 if (!isPrime[j])
//                     isPrime[j] = true;
//             }
//         }
//     }
// }

void solve(long long n, int a, int b)
{
    int count = 0;
    for (long long i = 2; i * i <= n; i++)
    {
        int countDivvar = 0;
        long long acc = i;

        for (long long n = 1; n * n <= i; n++)
        {
            if (i % n == 0)
            {
                countDivvar++;
                if (isPrime(n))
                {
                    acc *= n;
                }
                if (n != (i / n))
                {
                    countDivvar++;
                    if (isPrime((i / n)))
                    {
                        acc *= ((i / n));
                    };
                }
            }
        }

        if (a <= countDivvar && countDivvar <= b && acc <= n)
        {
            count++;
        }
    }

    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, a, b;

    cin >> n >> a >> b;

    solve(n, a, b);
    // cout << isPrime(6);
}