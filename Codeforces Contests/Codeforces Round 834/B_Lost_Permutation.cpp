
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        set<int> ref;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ref.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (maxi < a[i])
                maxi = a[i];
        }
        int num = 1;
        int sum = 0;
        while (num)
        {
            if (ref.find(num) != ref.end())
            {
                num++;
                continue;
            }
            sum += num;
            if (sum > m)
            {
                cout << "NO" << endl;
                break;
            }
            ref.insert(num);
            if (sum == m)
            {
                int t1 = 0;
                for (int k = 1; k <= maxi; k++)
                {
                    if (ref.find(k) != ref.end())
                        continue;
                    t1 = 1;
                    break;
                }
                if (!t1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
                break;
            }
            num++;
        }
    }
    return 0;
}