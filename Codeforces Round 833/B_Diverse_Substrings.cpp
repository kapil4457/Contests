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
        ll n = 5;
        cin >> n;

        string s = "01100";
        cin >> s;
        map<ll, ll> ref;
        set<ll> st;

        for (ll i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }

        ll unique = st.size();
        ll i = 0;
        ll ans = 0;
        int start = 0;
        while (i < n)
        {
            int count = 0;
            while (ref[s[i]] < unique && i < n)

            {
                // cout << s[i] << " " << ref[s[i]] << endl;
                ref[s[i]]++;
                i++;
                count++;
            }
            ref.clear();
            ans += ((count * (count + 1)) / 2);

            if (i <= n - 1)
            {

                while (s[start] == s[i])
                {
                    start++;
                }

                ans += abs(start - i) - 1;
                start = i;
            }
        }

        cout << ans << endl;
    }
    return 0;
}