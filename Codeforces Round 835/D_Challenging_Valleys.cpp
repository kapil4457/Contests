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

        ll n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int inc = 0, dec = 0, f = 0;
        ;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                inc++;
            }
            else if (arr[i] < arr[i - 1])
            {
                dec++;
                if (inc)
                {
                    f++;
                    break;
                }
            }
        }

        if (f)
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