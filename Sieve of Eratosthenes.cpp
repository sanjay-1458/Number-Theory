#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool Sieve_of_Eratosthenes1(int N)
{
    bool primes[N + 1];
    fill(primes, primes + N + 1, true);
    for (int i = 2; i < N; ++i)
    {
        if (primes[i] == true)
        {
            cout << i << endl;
            for (int j = i * i; j < N; j += i)
                primes[j] = false;
        }
    }
}

bool Sieve_of_Eratosthenes2(int N)
{
    bool primes[N + 1];
    fill(primes, primes + N + 1, true);
    for (int i = 2; i * i <= N; ++i)
        if (primes[i] == true)
            for (int j = i * i; j <= N; j += i)
                primes[j] = false;
    for (int i = 2; i <= N; ++i)
        if (primes[i])
            cout << i << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << Sieve_of_Eratosthenes(n) << endl;
}
