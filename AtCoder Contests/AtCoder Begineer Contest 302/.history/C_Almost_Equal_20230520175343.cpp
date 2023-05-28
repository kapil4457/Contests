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
int n,m;
cin>>n>>m;
vector<string>s(n);
for(int i =0 ; i < n ; i ++)
{
cin>>s[i];
}

sort(s.begin() , s[i].end());
bool check = false;
for(int i =0  ; i < n-1 ; i ++){

int cnt =0;

for(int   j =0 ; j < m ; j ++){
if(s[i][j]!=s[i+1][j])cnt++;
}

if(cnt!=1){
    check=true;
    break;
}

if(check)break;
}


if(check){
cout<<"No"<<endl;
}else{
    cout<<"Yes"<<endl;
}




// abbirt
// aabirt





}
int main()
{
TEST {
Solve();
}
 return 0;
}