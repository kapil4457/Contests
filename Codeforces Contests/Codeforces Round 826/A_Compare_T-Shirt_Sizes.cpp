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
        string str1 = "XXXS", str2 = "XS";
        cin >> str1 >> str2;

        if (str1 == str2)
        {
            cout << "=" << endl;
            continue;
        }

        bool s1 = false;
        bool l1 = false;
        bool m1 = false;
        int x1 = 0;

        bool s2 = false;
        bool l2 = false;
        bool m2 = false;
        int x2 = 0;

        for (int i = 0; i < str1.size(); i++)
        {
            if (str1[i] == 'S')
            {
                s1 = true;
            }

            if (str1[i] == 'L')
            {
                l1 = true;
            }

            if (str1[i] == 'M')
            {
                m1 = true;
            }
            if (str1[i] == 'X')
            {
                x1++;
            }
        }

        for (int i = 0; i < str2.size(); i++)
        {
            if (str2[i] == 'S')
            {
                s2 = true;
            }

            if (str2[i] == 'L')
            {
                l2 = true;
            }

            if (str2[i] == 'M')
            {
                m2 = true;
            }
            if (str2[i] == 'X')
            {
                x2++;
            }
        }

        if ((s1 == true && l2 == true) || (s1 == true && m2 == true))
        {
            cout << "<" << endl;
        }
        else if ((s2 == true && l1 == true) || (s2 == true && m1 == true))
        {
            cout << ">" << endl;
        }
        else if ((l1 == true && m2 == true) || (l1 == true && s2 == true))
        {
            cout << ">" << endl;
        }
        else if ((l2 == true && m1 == true) || (l2 == true && s1 == true))
        {
            cout << "<" << endl;
        }
        else if (s1 == true && s2 == true)
        {
            if (x1 > x2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
        else if (l1 == true && l2 == true)
        {
            if (x1 > x2)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
    }
    return 0;
}