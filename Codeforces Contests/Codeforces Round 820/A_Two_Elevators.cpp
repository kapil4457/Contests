#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll timeForFirst = abs(a - 1);
        ll timeForSecond = abs(b - c);
        timeForSecond += abs(c - 1);

        if (timeForFirst == timeForSecond)
        {
            cout << 3 << endl;
        }
        else if (timeForFirst > timeForSecond)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}