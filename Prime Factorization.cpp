#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

void Prime_Factorization1(int N)
{
    bool flag = false;
    for (int i = 2; i * i <= N; ++i)
        if (isPrime(i) && N % i == 0)
        {
            cout << i << endl;
            flag = true;
        }
    if (!flag)
        cout << N << endl;
}

void Prime_Factorization2(int N)
{
    int k = N, i = 2;
    while (i * i <= N && k > 0)
    {
        if (isPrime(i) && k % i == 0)
        {
            k = k / i;
            cout << i << endl;
        }
        else
            i++;
    }
    if (isPrime(N))
        cout << N << endl;
}

void Prime_Factorization3(int N)
{
    if (isPrime(N))
    {
        cout << N << endl;
        return;
    }
    for (int i = 2; i * i <= N; ++i)
        while (N % i == 0)
        {
            cout << i << endl;
            N = N / i;
        }
    if (N > 1)
        cout << N << endl;
}

void Prime_Factorization4(int N)
{
    if (isPrime(N))
    {
        cout << N << endl;
        return;
    }
    int k = sqrt(N);
    bool primes[k + 1];
    fill(primes, primes + k + 1, true);
    for (int i = 2; i * i <= k; ++i)
        if (primes[i] == true)
        {
            for (int j = i * i; j <= k; j += i)
                primes[j] = false;
        }

    vector<int> vec;
    for (int i = 2; i <= k; ++i)
        if (primes[i])
            vec.push_back(i);
    int i = 0;
    while (i < vec.size())
    {
        if (N % vec[i] == 0)
        {
            cout << vec[i] << endl;
            N = N / vec[i];
        }
        else
            i++;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    Prime_Factorization(n);
}
