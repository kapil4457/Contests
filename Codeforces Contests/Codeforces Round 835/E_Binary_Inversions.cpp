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
        ll n = 8;
        cin >> n;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<ll> onesBefore(n);
        onesBefore[0] = 0;
        vector<ll> zerosAfter(n);
        zerosAfter[n - 1] = 0;

        for (ll i = 1; i < n; i++)
        {
            if (v[i - 1] == 1)
            {
                onesBefore[i] = onesBefore[i - 1] + 1;
            }
            else
            {
                onesBefore[i] = onesBefore[i - 1];
            }
        }

        for (ll i = n - 2; i >= 0; i--)
        {
            if (v[i + 1] == 0)
            {
                zerosAfter[i] = zerosAfter[i + 1] + 1;
            }
            else
            {
                zerosAfter[i] = zerosAfter[i + 1];
            }
        }

        ll inversiosNow = 0;

        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                inversiosNow += zerosAfter[i];
            }
        }
        ll newInversionCount = inversiosNow;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                ll tempInversions = inversiosNow - onesBefore[i] + zerosAfter[i];
                if (tempInversions > newInversionCount)
                {
                    newInversionCount = tempInversions;
                }
            }
            else
            {
                ll tempInversions = inversiosNow + onesBefore[i] - zerosAfter[i];
                if (tempInversions > newInversionCount)
                {
                    newInversionCount = tempInversions;
                }
            }
        }

        cout << newInversionCount << endl;
    }
    return 0;
}