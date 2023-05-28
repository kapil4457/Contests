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
        bool oneFound = false;

        int n;
        cin >> n;
        int k;
        cin >> k;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == 1)
            {
                oneFound = true;
            }
        }

        if (oneFound)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}