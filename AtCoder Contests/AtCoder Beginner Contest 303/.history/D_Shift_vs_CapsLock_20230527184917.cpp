#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;



int ans = INT_MAX;;


void helper(int x,int y,int z,string s , int idx,int currSum){


if(idx==s.length()){
    ans = min(ans , currSum);
    return;
}

}

void Solve(){
int x,y,z;
cin>>x>>y>>z;
string s;
cin>>s;

helper(x,y,z,s,0,0);

}
int main()
{
TEST {
Solve();
}
 return 0;
}