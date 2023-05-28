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
int n;
cin>>n;
vector<int>v1(n);
vector<int>v2(n);

map<int,int>ref;
int sum1 = 0 , sum2 = 0;
for(int i =0  ; i  < n; i++){
    cin>>v1[i];
    sum1+=v1[i];
}
for(int i =0  ; i  < n; i++){
    cin>>v2[i];
    sum2+=v2[i];
    ref[v2[i]]++;
}

int diff = sum1-sum2;
// v1-v2 = diff;
int ans  = INT_MAX;
for(int i =0 ; i < n ; i ++){
int num = (v1[i] - diff)/2;

if(ref.find(num)!=ref.end()){
    ans = min(ans , min(num , v1[i]));
}
}
cout<<ans<<endl;

 return 0;
}