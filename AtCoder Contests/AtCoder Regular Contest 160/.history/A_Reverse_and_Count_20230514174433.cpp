#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){

int n=5,k=15;
// cin>>n>>k;

vector<int>v = {1,2,3,4,5};

// vector<int>v(n);
// for(int i=0;i<n;i++)cin>>v[i];

int set = ceil(1.0*k/n);
int l = set-1;
int r = k%n;

reverse(v.begin()+l , v.begin()+r+1);
for(auto it : v){
    cout<<it<<" ";
}
cout<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}