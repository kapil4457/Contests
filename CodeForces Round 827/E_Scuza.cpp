#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{
    ll t = 1;
    // cin >> t;

    while (t--)
    {
        ll n = 4, q = 5;
        // cin >> n >> q;
        ll arr[n] = {1, 2, 1, 5}, ques[q] = {1, 2, 4, 9, 10};
        // cin >> arr[0];
        // for (ll i = 1; i < n; i++)
        // {
        //     cin >> arr[i];
        // }

        // cin >> ques[0];
        // for (ll i = 1; i < q; i++)
        // {
        //     cin >> ques[i];
        // }

        sort(ques, ques + q);

        cout << "Ques : ";
        for (int i = 0; i < q; i++)
        {
            cout << ques[i] << " ";
        }
        cout << endl;

        ll ans[q];
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (ques[0] >= arr[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

        ans[0] = cnt;
        for (ll i = 1; i < q; i++)
        {
            ll temp = ans[i - 1];
            for (ll j = ans[i - 1]; j < n; j++)
            {
                if (ques[i] >= arr[j])
                {
                    temp++;
                }
            }

            ans[i] = temp;
        }

        for (ll i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
    return 0;
}