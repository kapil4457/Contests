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
int n ;
cin>>n;

int minAge = INT_MAX;
int idx = -1;

vector<string>v(n);

int a ;

for(int i =0 ; i  < n ; i ++){
cin>>v[i];
cin>>a;

if(minAge > a){
    minAge = a;
    idx = i;
}
}


for(int i = idx ; i < n ; i ++){
    cout<<v[i]<<endl;
}

for(int i =0  ; i < idx ; i ++){
    cout<<v[i]<<endl;
}


}
int main()
{
TEST {
Solve();
}
 return 0;
}