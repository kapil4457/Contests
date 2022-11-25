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
        string s;
        cin >> s;

        map<ll, ll> ref;
        ll n = s.length();

        for (ll i = 0; i < n; i++)
        {
            ref[s[i]]++;
            ref[s[i]]++;
        }

        string ans = "";

        // making the first half of the string

        for (auto it : ref)
        {
            ll c = it.second / 2;

            for (ll i = 0; i < c; i++)
            {
                ans.push_back(it.first);
            }
        }

        string temp = ans;
        reverse(temp.begin(), temp.end());
        ans += temp;
        cout << ans << endl;
    }
    return 0;
}