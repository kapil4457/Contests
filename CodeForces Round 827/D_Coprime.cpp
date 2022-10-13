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

        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (__gcd(arr[i], arr[j]) == 1)
                {
                    ans = max(ans, (i + j + 2));
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}