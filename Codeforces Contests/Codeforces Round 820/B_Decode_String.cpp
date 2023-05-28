#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        int len = 4;
        cin >> len;
        string s = "1100";
        cin >> s;
        string ans = "";

        ll i = len - 1;

        while (i >= 0)
        {
            if (s[i] == '0')
            {

                string temp = "";
                temp.push_back(s[i - 2]);
                temp.push_back(s[i - 1]);

                int t1 = stoi(temp);
                char t2 = t1 + 96;
                ans.push_back(t2);
                i -= 3;
            }
            else
            {
                string temp = "";
                temp.push_back(s[i]);
                int t1 = stoi(temp);
                char t2 = t1 + 96;
                ans.push_back(t2);
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}