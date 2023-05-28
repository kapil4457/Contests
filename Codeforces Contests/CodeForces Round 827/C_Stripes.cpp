// #include <bits/stdc++.h>
// #define ll long long int
// #define pb push_back
// #define mod 1000000007ll // 998244353ll
// #define mii map<int, int>
// #define pii pair<int, int>
// using namespace std;
// int main()
// {

//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         vector<vector<char>> ref(8, vector<char>(8));

//         for (ll i = 0; i < 8; i++)
//         {

//             for (ll j = 0; j < 8; j++)
//             {

//                 cin >> ref[i][j];
//             }
//         }

//         char ans;
//         for (ll i = 0; i < 8; i++)
//         {
//             char thisRow = ref[i][0];
//             char thisCol = ref[0][i];
//             bool checkRow = true;
//             bool checkCol = true;

//             // if (thisRow == '.')
//             // {
//             //     continue;
//             // }
//             for (ll j = 0; j < 8; j++)
//             {
//                 if (ref[i][j] != thisRow)
//                 {
//                     checkRow = false;
//                 }

//                 if (ref[j][i] != thisCol)
//                 {
//                     checkCol = false;
//                 }
//             }

//             if (checkRow == true && thisRow != '.')
//             {
//                 ans = thisRow;
//                 break;
//             }
//             if (checkCol == true && thisCol != '.')
//             {
//                 ans = thisCol;
//                 break;
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll // 998244353ll
#define mii map<int, int>
#define pii pair<int, int>
using namespace std;
int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        string arr[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> arr[i];
        }
        int r = 0, b = 0, flag = 0;

        for (int i = 0; i < 8; i++)
        {
            r = 0;
            for (int j = 0; j < 8; j++)
            {
                if (arr[i][j] == 'R')
                {
                    r++;
                }
            }
            if (r == 8)
            {
                cout << 'R' << endl;
                flag = 1;
                break;
            }
        }

        if (!flag)
        {
            for (int i = 0; i < 8; i++)
            {
                b = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (arr[j][i] == 'B')
                    {
                        b++;
                    }
                }

                if (b == 8)
                {
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}