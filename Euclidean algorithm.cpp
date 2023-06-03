#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void gcd1(int a, int b)
{
    vector<int> v1, v2;
    for (int i = 2; i * i <= a; ++i)
    {
        while (a % i == 0)
        {
            a = a / i;
            v1.push_back(i);
        }
    }
    for (int i = 2; i * i <= b; ++i)
    {
        while (b % i == 0)
        {
            b = b / i;
            v2.push_back(i);
        }
    }
    if (a > 1)
        v1.push_back(a);
    if (b > 1)
        v2.push_back(b);
    int i = 0, j = 0, res = 1;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] == v2[i])
        {
            res *= v1[i];
            i++;
            j++;
        }
        else
        {
            break;
        }
    }
    for (auto e : v1)
        cout << e << " ";
    cout << endl;
    for (auto e : v2)
        cout << e << " ";
    cout << endl;
    cout << res << endl;
}

int gcd2(int a, int b)
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
