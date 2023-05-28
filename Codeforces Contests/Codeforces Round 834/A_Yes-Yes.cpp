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
    int t = 1;
    cin >> t;
    while (t--)
    {
        bool check = false;
        string s = "o";
        cin >> s;
        ll n = s.length();
        if (n == 1)
        {
            if (s[0] != 'Y' && s[0] != 'e' && s[0] != 's')
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            continue;
        }
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == 'Y')
            {
                if (s[i - 1] != 's')
                {
                    check = true;
                    break;
                }
            }
            else if (s[i] == 'e')
            {
                if (s[i - 1] != 'Y')
                {
                    check = true;
                    break;
                }
            }
            else if (s[i] == 's')
            {
                if (s[i - 1] != 'e')
                {
                    check = true;
                    break;
                }
            }
            else
            {
                check = true;
                break;
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