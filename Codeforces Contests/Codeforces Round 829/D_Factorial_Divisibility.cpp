#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007 // 998244353ll
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
    // int t;
    // cin >> t;
    vector<int> ref(11);
    ref[0] = 1;
    for (int i = 1; i < 11; i++)
    {
        ref[i] = (ref[i - 1] * i);
    }

    // while (t--)
    // {
    int n, x;
    cin >> n >> x;
    vector<int> ref1(n);
    int totalN = 0;
    int t1 = x % 10;
    int totalX = ref[t1];

    if (x > n)
    {
        cout << "No" << endl;
    }
    else if (x == n)
    {
        cout << "Yes" << endl;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            cin >> ref1[i];
            int temp = ref[ref1[i] % 10];
            totalN += temp;
        }

        if (totalN % totalX == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    // }
    return 0;
}