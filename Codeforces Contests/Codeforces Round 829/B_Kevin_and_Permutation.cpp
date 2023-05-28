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
        else if (n == 1)
        {
            cout << 1 << " " << 2 << endl;
        }
        else if (n == 3)
        {
            cout << 1 << " " << 2 << " " << 3 << endl;
        }
        else
        {

            float half = ceil(float(n) / float(2));
            vector<int> ans(n);

            for (int i = 0; i < n; i += 2)
            {
                ans[i] = half;
                half--;
            }
            int half2 = n;

            for (int i = 1; i < n; i += 2)
            {
                ans[i] = half2;
                half2--;
            }

            // if (n % 2 == 0)
            // {
            // cout << ans[n - 1] << " ";
            // for (int i = 0; i < n - 1; i++)

            // {
            //     cout << ans[i] << " ";
            // }
            // cout << endl;
            // }
            // else
            // {

            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
            // }
        }
    }
    return 0;
}