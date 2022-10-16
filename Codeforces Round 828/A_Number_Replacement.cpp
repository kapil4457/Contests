#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n = 5;
        cin >> n;
        vector<int> v(n);
        // map<int, int> ref;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // ref[v[i]]++;
        }

        string str = "cacta";

        cin >> str;

        if (str.length() != n)
        {
            cout << "NO" << endl;
            continue;
        }

        map<int, char> ref2;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if (ref2.find(v[i]) == ref2.end() || ref2[v[i]] == str[i])
            {

                ref2[v[i]] = str[i];
                // cout << "Matches : " << v[i] << " " << ref2[v[i]] << " " << str[i] << endl;
            }
            else
            {
                // cout << "Not Matches : " << ref2[v[i]] << " " << v[i] << " " << str[i] << endl;
                check = false;
                break;
            }
        }

        if (check)
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