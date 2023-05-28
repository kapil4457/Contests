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

        // vector<int> type = {0, 1, 1, 1};
        vector<int> type;
        for (int i = 0; i < n; i++)
        {
            cin >> type[i];
        }

        vector<int> fire;
        vector<int> frost;
        frost = {6, 7, 8};
        fire = {3, 4, 5};
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            if (type[j] == 0)
            {
                fire.push_back(temp);
            }
            else
            {
                frost.push_back(temp);
            }
        }
        int ans = 0;
        int last = -1;
        int ab = fire.size();
        int ba = frost.size();
        int diff = abs(ab - ba);
        if (fire.size() > frost.size())
        {
            last = 0;
        }
        else
        {
            last = 1;
        }

        if (last == 0)
        {
            sort(fire.begin(), fire.end());
            for (int i = 0; i < diff; i++)
            {
                ans += fire[i];
                last = 0;
            }

            for (int i = diff; i < fire.size(); i++)
            {
                if (last != -1)
                {

                    ans += (2 * fire[i]);
                    last = 0;
                }
                else
                {
                    ans += fire[i];
                }
            }
            for (int i = 0; i < frost.size(); i++)
            {
                ans += (2 * frost[i]);
            }
        }
        else
        {
            sort(frost.begin(), frost.end());
            for (int i = 0; i < diff; i++)
            {
                ans += frost[i];
            }

            for (int i = diff; i < frost.size(); i++)
            {
                ans += (2 * frost[i]);
            }
            for (int i = 0; i < fire.size(); i++)
            {
                ans += (2 * fire[i]);
            }
        }

        cout << ans << endl;
    }
    return 0;
}