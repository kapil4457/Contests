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
        int n = 2;
        cin >> n;

        int i = 1;
        int j = ((n)*3) - 1;
        int count = 0;
        vector<vector<int>> ref;
        while (i < j)
        {
            ref.push_back({i, j});
            i += 3;
            j -= 3;
            count++;
        }

        cout << count << endl;
        for (int k = 0; k < ref.size(); k++)
        {
            cout << ref[k][0] << " " << ref[k][1] << endl;
        }
    }
    return 0;
}