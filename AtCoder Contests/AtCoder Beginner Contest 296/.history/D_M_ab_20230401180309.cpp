#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
int main()
{
ll n=5 , m=7;
cin>>n>>m;
ll ans = -1;

ll lo = 1;
ll hi = n;

while(lo <= hi){
ll mid = lo + (hi-lo)/2;
if(lo*mid >= m){
    ans = lo*mid;
    hi = mid-1;
}else{
    lo = mid+1;
}
}

cout<<ans<<endl;
 return 0;
}