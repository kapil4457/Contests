#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
int main()
{
ll n=2 , x=0;
// cin>>n>>x;
// vector<ll>v(n);
vector<ll>v = {141421356, 17320508};

map<ll,ll>ref;
for(ll i =0 ; i < n ; i ++){
    cin>>v[i];
    ref[v[i]]++;
}

bool check = false;
for(ll i = 0 ; i < n ; i ++){
    ll diff = x + v[i];
    
  

        if(ref.find(diff)!=ref.end()){
            cout<<"Yes"<<endl;
            check = true;
            break;
        
    }


}

if(check==false){
    cout<<"No"<<endl;
}

 return 0;
}