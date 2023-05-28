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

int n,k;
cin>>n>>k;

vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i];

int set = ceil(k/n);
int l = set;
int r = k%n;

reverse(v.begin()+l , v.begin()+r);
for(auto it : v){
    cout<<it<<" ";
}

}
int main()
{
TEST {
Solve();
}
 return 0;
}