#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        char c;
        cin >> n >> c;

        string str;
        cin >> str;
        ll maxi = LLONG_MIN;
        vector<ll> arr(n, -1);
        for (ll i = 0; i < n; i++)
        {
            if (str[i] == c)
            {
                ll distance = 0;
                ll j = i;
                while (str[j % n] != 'g')
                {
                    if (arr[i] != -1)
                    {
                        distance += arr[i] + 1;
                        break;
                    }
                    distance++;
                    j++;
                }
                arr[i] = maxi;

                maxi = max(maxi, distance);
            }
        }

        cout << maxi << endl;
    }
    return 0;
}