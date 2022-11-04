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
        vector<ll> v(n);
        // vector<ll> v = {10, -10};
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        ll maxDiff = LLONG_MIN;
        ll prevRight = 0;
        ll prevLeft = sum;
        for (ll i = n - 1; i >= 0; i--)
        {
            ll tempSumLeft = prevLeft;
            ll tempSumRight = prevRight;
            if (i + 1 < n)
            {

                sum += v[i + 1];
            }
            if (abs(tempSumLeft) - abs(tempSumRight) > maxDiff)
            {
                maxDiff = abs(tempSumLeft) - abs(tempSumRight);
            }

            prevRight += v[i];
            prevLeft -= v[i];
        }

        cout << maxDiff << endl;
    }
    return 0;
}