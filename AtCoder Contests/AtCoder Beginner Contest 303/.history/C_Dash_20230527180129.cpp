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
ll n,h,m,k;

string s;
cin>>s;
map<pair<ll,ll> , ll>ref;
pair<int,int>temp;
for(int i  = 0  ; i < m ; i ++){
cin>>temp.first>>temp.second;
ref[temp]++;
}

int x = 0 , y =0 ;
for(int i =0 ; i < n ; i ++){
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

        
}



}
int main()
{
TEST {
Solve();
}
 return 0;
}