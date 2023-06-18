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
void Solve(){

int n=9;
cin>>n;
vector<int>inp(n);
// vector<int>inp={3,7,7,9,2,4,6,3,4};
// vector<int>inp={3,2,1,2,3};
// vector<int>inp={3,4,2,1};
for(int i =0 ; i   < n ; i ++)cin>>inp[i];

if(n==1 ){
    cout<<1<<endl;
    return;

}

if(n==2){
    cout<<11<<endl;
    return;

}
vector<int>ans(n , 0);


bool dir = true;
// true --> ascending
// false --> descending
ans[0]=1;
deque<int>ref;
ref.push_back(inp[0]);

// This will work if we start with "ascending then descending" type of sequence

if(inp[1])
for(int i =1 ; i < n ; i ++){

if(inp[i]>=ref.back() && dir ){
    ans[i] = 1;
    ref.push_back(inp[i]);
}else{
    
    if( inp[i]<=ref.front()  && (ref.size()<2 ||inp[i]==ref.back() || inp[i]==ref.front() ||  ref.back() >= ref.at(ref.size()-2) )){
        
dir = false;
        ans[i]=1;
        ref.push_back(inp[i]);
    }
}


}


for(auto it : ans)cout<<it;

cout<<endl;




}
int main()
{
TEST {
Solve();
}
 return 0;
}