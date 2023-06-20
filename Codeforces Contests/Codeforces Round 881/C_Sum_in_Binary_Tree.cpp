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

ll n=10;
cin>>n;
// Find the level
ll level = 0;
ll firstNumofThatLevel = pow(2,level);
while(n > firstNumofThatLevel + pow(2,level)-1){
level++;
firstNumofThatLevel = pow(2,level);
}

// level--;


// find the index of the number

ll indexOfThisNumber = n - firstNumofThatLevel+1;

// traversal
ll childNodesYet  =  pow(2,level);

ll currEle = 1;
ll ans =0;
while(currEle!=n){
    ans+=currEle; 
    ll currIdx = indexOfThisNumber%childNodesYet;
    // Move left
    if(currIdx <= childNodesYet/2 && currIdx!=0){
        currEle *=2;
    }
    // move right
    else{
currEle*=2;
currEle++;
    }

    childNodesYet/=2;
}

ans+=n;
cout<<ans<<endl;


}
int main()
{
TEST {
Solve();
}
 return 0;
}