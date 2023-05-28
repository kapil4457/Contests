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
int x,y,z;
cin>>x>>y>>z;
string s;
cin>>s;

int isLightOn = 0;

int n = s.length();
int ans =0;

for(int i =0 ; i < n ; i ++){

if(s[i]=='a' && isLightOn==0     ||    s[i]=='A'&& isLightOn==1){
    ans+=x;
}else {
    int timeToPressCapsAndThenTheKey = x+z;

}


}

}
int main()
{
TEST {
Solve();
}
 return 0;
}