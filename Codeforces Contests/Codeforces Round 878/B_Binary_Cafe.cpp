#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){
ll coins, desserts;
        cin >> coins >> desserts;
        if(log2(coins) < desserts)
        {
            cout << coins + 1 << endl;
        }
        else{
            cout << (ll)pow(2 , desserts) << endl;
        }
}
int main()
{
TEST {
Solve();
}
 return 0;
}