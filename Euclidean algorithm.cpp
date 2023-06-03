#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a, int b)
{
    while (a != 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int Euclidean(int a, int b)
{
    if (a == 0)
        return b;
    return Euclidean(b % a, a);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    gcd(a, b);
}
