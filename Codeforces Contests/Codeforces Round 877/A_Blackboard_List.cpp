#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


bool isPossible(ll currEle , ll currIdx , vector<ll>&v , ll n){


bool check = false;
for(int i =0 ; i < n ; i ++){
    for(int j =0  ;  j < n ; j ++){

        if(i==currIdx || j==currIdx)continue;

        if(abs(v[i]-v[j]) == currEle){
            check = true;
        }
    }

    if(check)break;
}

if(check)return true;

return false;

}
void Solve(){
ll n=3;
cin>>n;
vector<ll>v(n);


for(int i =0 ; i < n  ; i ++)
{

cin>>v[i];
}

sort(v.begin(),v.end());
for(int i =0 ; i < n ; i ++){


    if( !isPossible(v[i] , i , v , n)){
cout<<v[i]<<endl;
return;
    }
}
cout<<v[0]<<endl;


}
int main()
{
TEST {
Solve();
}
 return 0;
}