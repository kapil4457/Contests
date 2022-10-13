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
        map<int, int> ref;
        bool check = false;
        int a;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (ref[a] > 0)
            {
                check = true;
            }
            else
            {
                ref[a]++;
            }
        }

        if (check)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}