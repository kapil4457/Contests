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
int n;
cin>>n;
vector<string>v(n);
for(int i =0 ; i < n ; i ++)cin>>v[i];
map<string , int>ref;
for(int i =0 ; i < n ; i ++){
    string rev = v[i];
    reverse(rev.begin() , rev.end());
    if(ref.find(v[i])==ref.end() && ref.find(rev)==ref.end()){
        ref[v[i]]++;
    }
}

cout<<ref.size()<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}