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
        int n, c;
        cin >> n >> c;
        int a;
        map<int, int> ref;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            ref[a]++;
        }

        int ans = 0;

        for (auto it : ref)
        {
            int machine1 = it.second;

            if (machine1 > c)
            {
                ans += c;
            }
            else
            {
                ans += machine1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}