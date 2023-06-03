#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
// #define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


class Comparator{
public : 
    bool operator()(pair<ll,ll>a , pair<ll,ll>b){

if(a.first == b.first){
if(a.second > b.second)return true;
return false;
}else{
    if(a.first > b.first)return false;
    return true;
}
    }
};

class PQComp{
    public : 
    bool operator()(pair<pair<ll,ll> , ll>a , pair<pair<ll,ll> , ll>b){
        if(a.first.first > b.first.first)return true;

        return false;
    }
};

void Solve(){
ll n=6;
cin>>n;
// vector<pair<ll,ll>>v = {{1,2} , {3,4}, {1,4} , {3,4} , {3,5} , {2,3}};
vector<pair<ll,ll>>v(n);

pair<ll,ll>temp;
for(ll i =0 ; i < n ; i ++){
cin>>temp.first>>temp.second;
v[i] = temp;
}

// Keeps the elemets with biggest 'b' ahead
sort(v.begin() , v.end() , Comparator());

// Keeps track of the bulb condition
// -1 ==> broken
//  0 ==> OFF
//  1 ==> ON
vector<ll>broken(n , 0);
ll ans = 0;
ll bulbsON = 0 ;


// Smallest 'a' comes first
priority_queue<pair<pair<ll,ll> , ll> , vector<pair<pair<ll,ll> , ll>>  , PQComp >pq;

for(ll i = 0 ; i < n ; i ++){
    pq.push({ v[i] ,  i });
}


ll i =0 ;
while(!pq.empty() && i < n){


if(broken[i]!=-1 &&  broken[i]!=1){
ans+=v[i].second;
 broken[i] = 1;
bulbsON++;
}

i++;

ll cnt =0;
while(!pq.empty() && pq.top().first.first <= bulbsON){


broken[pq.top().second] = -1;
pq.pop();
cnt++;

}
    bulbsON-=cnt;
    if(bulbsON < 0 )bulbsON=0;



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