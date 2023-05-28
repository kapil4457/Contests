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
    map<int, int> ref;

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ref[v[i] % i]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (__gcd(v[i], i) == 1)
        {
            cout << 1 << endl;
            continue;
        }
    }


    

    return 0;
}