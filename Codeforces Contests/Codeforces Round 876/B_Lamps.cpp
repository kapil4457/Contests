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
    bool operator()(pair<int,int>a , pair<int,int>b){

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
    bool operator()(pair<pair<int,int> , int>a , pair<pair<int,int> , int>b){
        if(a.first.first > b.first.first)return true;

        return false;
    }
};

void Solve(){
int n=6;
cin>>n;
// vector<pair<int,int>>v = {{1,2} , {3,4}, {1,4} , {3,4} , {3,5} , {2,3}};
vector<pair<int,int>>v(n);

pair<int,int>temp;
for(int i =0 ; i < n ; i ++){
cin>>temp.first>>temp.second;
v[i] = temp;
}

// Keeps the elemets with biggest 'b' ahead
sort(v.begin() , v.end() , Comparator());

// Keeps track of the bulb condition
// -1 ==> broken
//  0 ==> OFF
//  1 ==> ON
vector<int>broken(n , 0);
int ans = 0;
int bulbsON = 0 ;


// Smallest 'a' comes first
priority_queue<pair<pair<int,int> , int> , vector<pair<pair<int,int> , int>>  , PQComp >pq;

for(int i = 0 ; i < n ; i ++){
    pq.push({ v[i] ,  i });
}


int i =0 ;
while(!pq.empty() && i < n){


if(broken[i]!=-1 &&  broken[i]!=1){
ans+=v[i].second;
 broken[i] = 1;
bulbsON++;
}

i++;

int cnt =0;
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