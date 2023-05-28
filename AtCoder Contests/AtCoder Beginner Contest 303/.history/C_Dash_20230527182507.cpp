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
ll n=4,h=3,m=2,k=1;
cin>>n>>m>>h>>k;
string s="RUDL";
cin>>s;
map<pair<ll,ll> , ll>ref;
for(int i  = 0  ; i < m ; i ++){
pair<int,int>temp;
cin>>temp.first>>temp.second;
ref[temp]++;
}

// ref[{-1,-1}]++;
// ref[{1,0}]++;

ll x = 0 , y =0 ;
for(ll i =0 ; i < n ; i ++){

    if(h==0){
        cout<<"No"<<endl;
        return;
    }
    if(s[i]=='U'){
        y++;
    }else if(s[i]=='D'){
y--;
    }else if(s[i]=='R'){
    x++;  
    }
      else if(s[i]=='L'){
        x--;    
        }


        h--;

        if(h <= -1){
cout<<"No"<<endl;
return;
        }
        if(ref.find({x,y})!=ref.end()   &&  h   < k){
            h=k;
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