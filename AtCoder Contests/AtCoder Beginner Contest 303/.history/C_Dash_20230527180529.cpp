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
ll n=4,h=2,m=3,k=1;
// cin>>n>>h>>m>>k;
string s="RUDL";
// cin>>s;
map<pair<ll,ll> , ll>ref;
// pair<int,int>temp;
// for(int i  = 0  ; i < m ; i ++){
// cin>>temp.first>>temp.second;
// ref[temp]++;
// }

ref[{-1,-1}]++;
ref[{1,0}]++;

ll x = 0 , y =0 ;
for(ll i =0 ; i < n ; i ++){
    if(s[i]=='U'){
        x--;
    }else if(s[i]=='D'){
x++;
    }else if(s[i]=='R'){
    y++;  
    }
      else if(s[i]=='L'){
        y--;    
        }

        h--;

        if(h <= -1){
cout<<"No"<<endl;
return;
        }
        if(ref.find({x,y})!=ref.end()   && h<k){
            h++;
        }
}


cout<<"Yes"<<endl;



}
int main()
{
TEST {
Solve();
}
 return 0;
}