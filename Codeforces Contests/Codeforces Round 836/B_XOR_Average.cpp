#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b % 2)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
using namespace std;

void solve()
{

    ll n;
    cin >> n;
    // if odd
    if (n % 2 != 0)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    // if even
    else
    {
        cout << 3 << " " << 1 << " ";
        for (ll i = 0; i < n - 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}