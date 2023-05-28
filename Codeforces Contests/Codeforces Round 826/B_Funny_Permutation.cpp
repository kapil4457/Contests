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

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 2 << " " << 1 << endl;
        }
        else if (n == 3)
        {
            cout << -1 << endl;
        }
        else if (n == 4)
        {
            cout << 4 << " " << 3 << " " << 1 << " " << 2 << endl;
        }
        else
        {
            for (int i = n; i > n / 2 + 1; i--)
            {
                cout << i << " ";
            }

            for (int i = 1; i <= n / 2 + 1; i++)
            {
                cout << i << " ";
            }

            cout << endl;
        }
    }

    return 0;
}