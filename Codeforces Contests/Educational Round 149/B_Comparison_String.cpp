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
int n;
cin>>n;
string s;
cin>>s;

int i =0 ;
int ans =0 ;
int cnt =0 ;
while(i  < n){
char temp = s[i];

while(s[i]==temp && i<n)
{
    cnt++;
    i++;
}

ans = max(ans , cnt);
cnt=0;
}


cout<<ans+1<<endl;


}
int main()
{
TEST {
Solve();
}
 return 0;
}