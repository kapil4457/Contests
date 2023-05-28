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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll maxi = LLONG_MIN;
        ll maxi2 = LLONG_MIN;
        int firstMax = -1;
        int secondMax = -1;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > maxi)
            {
                maxi = v[i];
                firstMax = i;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            if (i != firstMax)
            {
                maxi2 = max(v[i], maxi2);
            }
        }
        vector<ll> ans(n);
        if (maxi2 == LLONG_MIN)
        {
            maxi2 = maxi;
        }
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == maxi)
            {

                ans[i] = v[i] - maxi2;
            }
            else
            {
                ans[i] = v[i] - maxi;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}