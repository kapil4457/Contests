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
        ll n, q, i, j, oddCount, evenCount, sum;
        oddCount = evenCount = sum = 0;
        cin >> n >> q;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] & 1 ? oddCount++ : evenCount++;
            sum += a[i];
        }
        int k = q;
        while (k--)
        {
            cin >> i >> j;
            i ? sum += (oddCount * j) : sum += (evenCount * j);
            cout << sum << endl;

            if (j & 1)
            {
                if (!i)
                    oddCount = n, evenCount = 0;
                else
                    oddCount = 0, evenCount = n;
            }
        }
    }
    return 0;
}
