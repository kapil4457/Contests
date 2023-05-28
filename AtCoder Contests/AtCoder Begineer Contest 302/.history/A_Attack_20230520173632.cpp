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
ll a , b;
cin>>a>>b;

long long ans = 0;
while(a > 0){
   a-=b;
    ans++;
}

if(a%b==0){
    cout<<a/b<<endl;
}else{
    cout<<(a/b)+1<<endl;
}
cout<<ans<<endl;
}
int main()
{
TEST {
Solve();
}
 return 0;
}