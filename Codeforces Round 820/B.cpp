#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        string ans = "";

        for (ll i = 0; i < s.length(); i++)
        {
            ll ascii = s[i] - 96;
            string temp = to_string(ascii);
            if (temp.length() == 1)
            {
                ans += temp;
            }
            else if (temp.length() == 2)
            {
                ans += temp;
                ans += "0";
            }
        }
    }

    return 0;
}