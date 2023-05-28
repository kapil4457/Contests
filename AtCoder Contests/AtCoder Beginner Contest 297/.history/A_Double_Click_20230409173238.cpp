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
int n , d;
cin>>n>>d;
vector<int>v(n);
for(int i =0 ; i < n ; i ++){
    cin>>v[i];
}

for(int i =0  ; i < n-1 ; i ++){
    if(v[i+1]-v[i] <= d){
        cout<<v[i+1]<<endl;
    }
}
 return 0;
}