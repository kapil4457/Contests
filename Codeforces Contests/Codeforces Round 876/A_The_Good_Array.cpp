#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin>>t;while(t--)
// #define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){
int n=9 , k=5;
cin>>n>>k;                                                                                                                                                                                                                                                                                                                                                                      

vector<int>ans(n,0);

// traversing for the front elements
int sum = 0;
for(int i =0 ; i < n ; i ++){
    float temp = ceil((1.0*(i+1))/(k*1.0));

if(sum < temp){
ans[i] = 1;
sum++;
}
}

sum=0;
// traversing for the end elements
int j = 1;
for(int i =n-1 ; i >= 0 ; i --){
    float temp = ceil((1.0*(j))/(k*1.0));
    j++;
    if(ans[i]==1)sum++;
    if(sum < temp && ans[i]!=1){
        ans[i]=1;
        sum++;
        
    }

}

int helper =0;
for(int i =0  ; i < n ; i ++){
    if(ans[i]==1)helper++;
}

cout<<helper<<endl;
}
int main()
{
TEST {
Solve();
}
 return 0;
}