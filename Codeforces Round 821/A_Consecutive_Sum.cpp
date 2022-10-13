#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll temp = 0;
        for (ll i = 1; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (temp == k)
                {
                    break;
                }
                if (i % k == j % k)
                {
                    ll t = v[i];
                    v[i] = v[j];
                    v[j] = t;
                    temp++;
                }
            }

            if (temp == k)
            {
                break;
            }
        }

        ll maxi = INT_MIN;

        for (ll i = 0; i < n; i++)
        {
            ll sumi = accumulate(v.begin() + i, v.begin() + i + k, 0);
            maxi = max(maxi, sumi);
        }

        cout << maxi << endl;
    }
    return 0;
}