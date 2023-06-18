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
int n;
cin>>n;
vector<int>v(n);
for(int i = 0 ; i < n ; i ++)cin>>v[i];
sort(v.begin()  ,v.end());

map<int,int>ref;


for(auto it : v){
    if(it==0){
        ref[it]++;
    }else{
        int prevNum = it-1;
        if(ref.find(it-1)!=ref.end() && ref[it-1] >0){
            ref[it-1]--;
            ref[it]++;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
}

cout<<"YES"<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}