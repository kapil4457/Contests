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

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n = 2;

        cin >> n;
        ll player = 0;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == 0)
        {
            if (player == 1)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
            continue;
        }

        if (n == 1)
        {
            if (v[0] % 2 == 0)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
            continue;
        }
        vector<vector<ll>> ref;

        for (ll i = 1; i < n; i++)
        {
            vector<ll> tt;
            tt.push_back(v[i]);
            tt.push_back(i);
            ref.push_back(tt);
        }

        sort(ref.begin(), ref.end());
        while (v[0] != 0)
        {
            v[0] -= 1;
            ll t1 = ref[0][0];
            ll t2 = ref[0][1];

            ref[0] = {v[0], t2};
            v[0] = t1;
            player = !player;
            sort(ref.begin(), ref.end());
        }

        if (player == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}